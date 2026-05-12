#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,7,1,9,5};
    int largest = arr[0];
    
    for(int i=1; i<=4; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }

    }
    cout<<"largest: "<<largest<<endl;
}