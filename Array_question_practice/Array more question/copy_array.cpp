#include<iostream>
using namespace std;

int main(){

    int arr1[] = {1,2,3,4,5};
    int arr2[5];
    int  i;

    for(int i=0; i<=4; i++){
    
        arr2[i] = arr1[i];
    }
    
    for(int i=0; i<=4; i++){
    cout<<arr2[i]<<" ";
     }
}

