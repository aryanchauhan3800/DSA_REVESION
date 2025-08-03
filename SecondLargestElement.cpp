#include <iostream>
#include <climits>
using namespace std;

int SecondLargest(int arr[],int n){

    int large = INT_MIN;
    int SecondLarge = INT_MIN;

    for(int i=0;i<n;i++){
     
        if(arr[i]>large){
            SecondLarge=large;
            large=arr[i];

        }else if (arr[i]> SecondLarge && arr[i]!=large){
            SecondLarge=arr[i];

        }; 
    };
    return SecondLarge;

};

int main (){
int arr[]={10,30,4548,77};
int seclar= SecondLargest(arr,4);
cout<<"the second largest element is "<<seclar<<endl;    
    return 0;

}