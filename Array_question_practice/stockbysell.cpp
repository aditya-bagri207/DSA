#include<iostream>
using namespace std;

int main(){

    int arr[] = {7,1,5,3,6,4};
    int profit = 0;
    int mini = arr[0];
    int n = sizeof(arr);

    for(int i = 1; i<=n; i++){
        int diff = arr[i] - mini;

        profit = max(profit,diff);
        mini = min(mini,arr[i]);
    }
    cout<<profit<<" ";
}