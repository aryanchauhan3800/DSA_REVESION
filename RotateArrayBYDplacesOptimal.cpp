#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdint>
#include <cstdlib>
using namespace std;

void RotateArraybyDplace(int arr[],int n,int d){
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;



}

int main (){
    int arr[]={1,2,3,4,5,6};

RotateArraybyDplace(arr,6,3);

    return 0;

}