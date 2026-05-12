#include<iostream>
using namespace std;

int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,1};
    int sum = 0;
    int n =9;
    

    for(int i=0; i<=n; i++){
        sum+=arr[i];
    }
    cout<<"Sum: "<<sum<<endl;
}