#include <iostream>
#include <vector>
using namespace std;

void  MoveZerosToEnd(int arr[],int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);

        }
    }
    int NonZero=temp.size();
    for(int i=0;i<NonZero;i++){
        arr[i]=temp[i];

    }
    for(int i=NonZero;i<n;i++){
        arr[i]=0;

    }
  for(int i=0;i<n;i++){
    cout<<arr[i];

  }


}

int main (){

int arr[]={1, 0, 2, 0, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    MoveZerosToEnd(arr, n);
    return 0;

}