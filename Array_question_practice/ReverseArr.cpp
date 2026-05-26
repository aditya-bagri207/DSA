//this question is solve by two pointer approch logic


#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,7,4,3,2};
    int n = 4;
    int start = 0;
    int end = n;
    int i;

        while(start<=end){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }
       for(int i=0; i<=n; i++){
         cout<<arr[i]<<" ";
         
       }
       cout<<endl;

}