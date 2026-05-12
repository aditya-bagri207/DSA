#include<iostream>
using namespace std;

int main(){
    int arr[] = {2,3,4,5,6,7,8};
    int key = 10;

    for(int i=0; i<=6; i++){
        if(arr[i]==key){
            cout<<"give key is found"<<endl;
            
        }
    
    }
    cout<<"given key is not found"<<endl;
}