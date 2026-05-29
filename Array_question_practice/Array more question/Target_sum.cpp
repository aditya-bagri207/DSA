#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,2,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 4;
    int pairs =0;

    for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                pairs+=1;
            }
        }
    }

    cout<<"pairs of target sum: ";
    cout<<pairs<<" ";
}




















/*
this logic i writen by yourself
#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,3,2,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 4;
    int pairs =0;

    int i=0;

    for(int j=1; j<n; j++){
        if(arr[i]+arr[j]==target){
        pairs+=1;
            

        }
        i++;
    }
    cout<<"pair of target sum: ";
    cout<<pairs<<" ";
}*/