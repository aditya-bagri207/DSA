#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3,4,4};
    int xorr = 0;

    for(int i=0; i<7; i++){
        xorr = xorr^arr[i];
    }

    cout<<"unique element:"<<xorr<<" ";
}