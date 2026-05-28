#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    int evenindeces_sum = 0;
    int oddindeces_sum = 0;


    for(int i=0; i<n; i++){
        if(i%2==0){
            evenindeces_sum+=arr[i];
        }

    }
    cout<<evenindeces_sum<<" "<<endl;
    for(int i=0; i<n; i++){
        if(i%2!=0){
            oddindeces_sum+=arr[i];
        }

    }

cout<<oddindeces_sum<<" "<<endl;

cout<<evenindeces_sum-oddindeces_sum<<" "<<endl;
}



/*this is optimized code in which only one loop use
#include<iostream>
using namespace std;

int main(){

    int arr[] = {1,2,3,4,5};

    int n = sizeof(arr)/sizeof(arr[0]);
    int evenindeces_sum = 0;
    int oddindeces_sum = 0;


    for(int i=0; i<n; i++){
        if(i%2==0){
            evenindeces_sum+=arr[i];
        }
        else if(i%2!=0){
            oddindeces_sum+=arr[i];
            
        }

    }
    cout<<evenindeces_sum<<" "<<endl;

    cout<<oddindeces_sum<<" "<<endl;

cout<<evenindeces_sum-oddindeces_sum<<" "<<endl;
}*/