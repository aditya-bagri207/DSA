//Remove duplicates from sorted array
//Example: [1,1,2,2,3] → [1,2,3]

#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,1,2,2,3};
    int n=4;

    int i = 0;
    for(int j=1; j<=n; j++){
        if(arr[j]!=arr[i]){
            i++;

            arr[i]=arr[j];
           
        }
    }
    for(int k=0; k<=i; k++){
        cout<<arr[k]<<" ";
    }
}

