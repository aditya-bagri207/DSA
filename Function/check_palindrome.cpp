#include<iostream>
using namespace std;

bool checkPalindrome(int n){

    int rev = 0;
    int original = n;

    while(n>0){
        int digit = n%10;
        rev =  rev*10+digit;
        n = n/10;

    }
    

    if(rev==original){
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    bool result = checkPalindrome(n);

    //cout<<result;
    if(true){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;

}