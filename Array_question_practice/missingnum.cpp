#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,4,5};
    int n  = sizeof(arr);

    for(int i=0; i<=n; i++){
        if(arr[i]!=3){
            cout<<"3";
        }
    }
}