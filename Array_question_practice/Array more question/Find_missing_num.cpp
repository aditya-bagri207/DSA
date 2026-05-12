#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,4,5};
    int n = 5;
    int sum = n*(n+1)/2;
    int S2 = 0;

    for(int i=0; i<4; i++){
        S2+=arr[i];

    }
    cout<<"Missing Number Is: "<<sum-S2<<" ";

}