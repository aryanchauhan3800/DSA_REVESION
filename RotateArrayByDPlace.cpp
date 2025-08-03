#include <iostream>
using namespace std;

void RotateByDPlaces(int arr[],int n,int D){
 int    d=D%n;
int temp[d];

 for(int i=0;i<d;i++){
    temp[i]=arr[i];
 }
 for(int i=d;i<n;i++){
    arr[i-d]=arr[i];

 }
 for(int i=n-d;i<n;i++){
    arr[i]=temp[i-(n-d)];


 }
 for(int i=0;i<n;i++){
    cout<<arr[i];

 }

}

int main (){
int arr[]={1,2,3,4,5,6,7};
RotateByDPlaces(arr,7,3);

    return 0;
}