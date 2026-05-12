#include<iostream>
using namespace std;

int main(){

    int arr[] = {-1,2,-5,4,-7};

   // int n = sizeof(arr);
    int count = 0;

    for(int i=0; i<=4; i++){
        if(arr[i]<0){
            count+=1;
        }

    }
    cout<<count<<" ";
}