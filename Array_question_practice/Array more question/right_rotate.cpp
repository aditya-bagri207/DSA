#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp = arr[n-1];


    for(int i=1; i<n; i++){
        arr[i]= arr[i-1];

    }
    arr[0] = temp;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}