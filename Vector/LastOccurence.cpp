#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>v(6);

    cout<<"Enter the ele: ";  
    for(int i=0; i<6; i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int occurence = -1;
    for(int i=0; i<6; i++){
        if(v[i]==x){
            occurence = i;

        }
    
    }

    cout<<occurence<<" ";

    for(int i=v.size()-1; i>0; i--){
        if(v[i]==x){
            occurence = i;       // its is direct method
            break;;
        }
    }

    cout<<occurence<<" ";




}