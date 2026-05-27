#include<iostream>
using namespace std;


int factorial(int n){

    int fact = n;

    for(int i=n-1; i>0;  i--){
        fact*=i;
    }

    return fact;


}


int main(){

    ///int n  = 5;

    int result = factorial(5);

    cout<<result;
    return 0;

}