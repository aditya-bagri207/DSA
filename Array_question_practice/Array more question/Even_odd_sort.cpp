#include<iostream>
using namespace std;

int arr[] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);

int main(){

int start = 0;
int end = n-1;

while(start<=end){
    if(arr[start]%2!=0 && arr[end]%2==0){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    else if(arr[start]%2==0){
        start++;
    }
    else if(arr[end]%2!=0){
        end--;
    }
}
for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}
}