#include<iostream>
using namespace std;

bool checkPrime(int a){
    int n = a;
    int count = 0;

    for(int i=1; i<=n; i++){
        if(a%i==0){
            count+=1;
        }

    }
    if(count==2){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int a;

    cout<<"enter a number: ";
    cin>>a;

    bool result = checkPrime(a);

    cout<<result;

    return 0;



}