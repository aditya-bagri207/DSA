#include<iostream>
#include<vector>
using namespace std;



int main(){
    vector<int>v(6);

    cout<<"Enter the ele: ";
    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }

    cout<<"enter the x: ";
    int x;
    cin>>x;

    int count = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>x){
            count+=1;
        }

    }
    cout<<count<<" ";



}