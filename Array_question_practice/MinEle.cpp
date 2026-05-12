#include<iostream>
using namespace std;

int main(){

    int arr[] = {2,7,1,9,5};
    int minimum = arr[0];
    
    for(int i=0; i<=4; i++){
        if(arr[i]<minimum){
            minimum = arr[i];
        }

    }
    cout<<"minimum value: "<<minimum<<endl;
}
