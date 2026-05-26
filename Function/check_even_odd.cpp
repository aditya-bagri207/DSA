#include<iostream>
using namespace std;

bool CheakEvenOdd(int a){

    if(a%2==0){
        return true;

    }
    else{
        return false;
    }
}

int main(){

    int result = CheakEvenOdd(1);

    cout<<result;
    
    return 0;
}