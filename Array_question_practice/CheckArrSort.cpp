#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};
    bool isSorted = true;



    for(int i= 1; i<=4; i++){
        if(arr[i-1]>arr[i]){
            isSorted = false;
            break;
        }
    }
    if(isSorted){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;

}