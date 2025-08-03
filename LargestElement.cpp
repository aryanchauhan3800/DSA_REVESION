#include <iostream>
using namespace std;

int FindLargestElement(int arr[],int n){
    int max = arr[0];

    for (int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];

        }
    }
    return max;
}

int main(){
    int n=5;

int arr1[]={1,55,66,90,8};

int max = FindLargestElement(arr1,n);
cout<<"the largest element is "<<max<<endl;



    return 0;
}