#include<iostream>
using namespace std;

int maxOfThree(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}

int main(){

    int a = 1;
    int b = 2;
    int c= 3;

    int result  = maxOfThree(a,b,c);

    cout<<result<<endl;

    return 0;

}

