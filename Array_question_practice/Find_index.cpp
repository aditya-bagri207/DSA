#include<iostream>
using namespace std;


int findIndex(int arr[], int key, int sz){
    for(int i=0; i<=sz; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return 1;
}

int main(){
    int arr[] = {2,7,1,9};
    int key = 2;
    int sz= 3;

    cout<<findIndex(arr,key,sz)<<endl;

}