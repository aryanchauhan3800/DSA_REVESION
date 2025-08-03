#include <iostream>
#include <set>

using namespace std;

int RemoveDuplicate(int arr[],int n){
set<int> set;

for(int i=0;i<n;i++){
   set.insert(arr[i]);

}
int k=set.size();
int j=0;
for(int x : set){
    arr[j++]=x;

}
return k;


}

int main (){

int arr[]={1,2,3,4,4,5};
int n= sizeof(arr)/sizeof(arr[0]);
int k = RemoveDuplicate(arr,n);
for(int i=0;i<k;i++){
    cout<<arr[i];

}
    return 0;

}