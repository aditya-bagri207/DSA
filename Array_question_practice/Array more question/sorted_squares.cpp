#include<iostream>
using namespace std;

int main(){
    int arr[] = {-10,-3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0;
    int end = n-1;
    int k  = n-1;
    int ans[n];

    while(start<=end){
        if(arr[start]*arr[start]>arr[end]*arr[end]){
            ans[k] = arr[start]*arr[start];
            start++;
            k--;
        }
        else {
            ans[k] = arr[end]*arr[end];
            end--;
            k--;
        }
    }
    for(int k=0; k<n; k++){
        cout<<ans[k]<<' ';
    }
}