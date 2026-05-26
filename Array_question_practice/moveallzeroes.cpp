#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,0,2,0,4};
    int n = 4;
    int i=0;

    for(int j=0; j<=n; j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]); // O(n^2)
            i++;
        }    
    
}
for(int i=0; i<=n; i++){
    cout<<arr[i]<<" ";
}
}

/*#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,0,2,0,4};
    int n = 4;

    for(int i=0; i<=4; i++){              //o(n^2)
        for(int j=i+1; j<=4; j++){
            if(arr[i]==0&& arr[j]!=0){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0; i<=4; i++){
        cout<<arr[i]<<" ";
    }
    
    
}*/