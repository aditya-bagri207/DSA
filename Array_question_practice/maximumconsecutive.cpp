//Find the maximum consecutive 1s
//Example: [1,1,0,1,1,1] → 3

#include <iostream>
using namespace std;

int main(){

    int arr [] = {1,1,0};
    int count= 0;
    int maxi = 0;
    int n = sizeof(arr);

    for(int i=0; i<=n; i++){
        if(arr[i]==1){
            count+=1;
            maxi = max(maxi,count);
        }
        else{
            count = 0;
        }
    }

    cout<<maxi<<" ";


}
