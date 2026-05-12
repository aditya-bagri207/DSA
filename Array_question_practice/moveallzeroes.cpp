#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,0,2,0,4};
    int n = 4;
    int i=0;

    for(int j=0; j<=n; j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }    
    
}
for(int i=0; i<=n; i++){
    cout<<arr[i]<<" ";
}
}