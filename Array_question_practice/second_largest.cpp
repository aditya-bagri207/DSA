#include<iostream>
using namespace std;

int main(){

    int arr[] = {77,44,10,8};
    int largest = arr[0];

    for(int i=0; i<=3; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }


    int second_largest = arr[0];
     for(int i=0; i<=3; i++){
        if(arr[i]!=largest){
            second_largest = max(second_largest,arr[i]);
        }
     }
     cout<<second_largest<<endl;        

    }
