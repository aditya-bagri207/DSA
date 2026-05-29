#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 6;
    int triplet =0;

    for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
            if(arr[i]+arr[j]+arr[k]==target){
                triplet+=1;
            }
        }
        }
    }

    cout<<"triplet of target sum: ";
    cout<<triplet<<" ";
}
