#include <iostream>
using namespace std;
void RemoveOnePlace(int arr[],int n){
    int temp[n];
    for(int i=1;i<n;i++){
        temp[i-1]=arr[i];

    }
    temp[n-1]=arr[0];
    for(int i=0;i<n;i++){
        cout<<temp[i]<<endl;

    }
};

int main (){

    int arr[]={1,2,3,4,5};
    RemoveOnePlace(arr,5);


    return 0;

}




