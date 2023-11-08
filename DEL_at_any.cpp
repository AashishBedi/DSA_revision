#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100];
    int n, pos;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>pos;
    
    cout<<"Original Array: ";
    for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
    
    if(pos < 1 || pos > n){
        cout<<"Invalid Position"<<endl;
    }
    else{
        for(int i= pos - 1; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        n--;
        
        cout<<"Updated Array: ";
        for(int i=0; i<n; i++){
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
}