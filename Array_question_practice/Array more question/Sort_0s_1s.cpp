#include<iostream>
using namespace std;
// two pointer approch
int main(){
    int arr[] =  {1,1,0,0,1,0,1,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    int start = 0; 
    int end = n-1;

    while(start<=end){
        if(arr[start]==1&&arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
        else if(arr[end]==1){
            end--;
        }
        else if(arr[start]==0){
            start++;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}


/*
//COUNTING APPROCH
int main(){

    int arr[] =  {1,1,0,0,1,0,1,0};

    int n = sizeof(arr)/sizeof(arr[0]);

    int countZeroes = 0;

    for(int i=0; i<n; i++){
        if(arr[i]==0){
            countZeroes+=1;
        }
    }
    
    for( int i=0; i<n; i++){
        if(i<countZeroes){
            arr[i]=0;
        }
        else{
            arr[i]=1;
        }
        
    }
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    }*/
