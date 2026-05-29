#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    int arr2[5];

    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 2;

    int j=0;
    for(int i=n-k; i<n; i++){
        arr2[j++] = arr[i];

    }

    for(int i=0; i<n-k; i++){
        arr2[j++] = arr[i];
    }

    for(int i = 0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
        
    }



