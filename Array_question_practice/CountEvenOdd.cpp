#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int count_even = 0;
    int count_odd = 0;

    for(int i=0; i<=4; i++){
        if(arr[i]%2==0){
            count_even+=1;
        }
        else if(arr[i]%2 !=0){
            count_odd+=1;
        }
    }
    cout<<"count_even: "<<count_even<<endl;
    cout<<"count_odd: "<<count_odd<<endl;
}
