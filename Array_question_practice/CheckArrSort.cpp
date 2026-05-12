#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    for(int i= 1; i<=4; i++){
        if(arr[i-1]>arr[i]){
            cout<<"not sorted"<<endl;
        }
    }
    cout<<"sorted"<<endl;

}