#include <iostream>
using namespace std;

bool isSorted(int arr[],int n){
    for(int i=0;i<n;i++){
      if(arr[i]<arr[i-1]){
        return false;

      }
    
    }
    return true ;

}

int main (){
    int arr[]={1,2,10,4,5,6};
    bool ans = isSorted(arr,5);
    if(ans) cout<<"True";
    else cout<<"False";


    return 0;

}
