#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], n, pos, val;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Original array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cin>>pos;
    cin>>val;
    
    if(pos<1 || pos > n+1){
        cout<<"Invalid pos";
        return 0;
    }
    
    for(int i = n ; i >= pos ; i--)
        arr[i] = arr[i - 1];
        
    arr[pos - 1] = val;
    n++;
    cout<<endl;
    cout<<"Resultant array: ";
    for(int i = 0; i<n; i++){
        cout<<" "<<arr[i];
    }
}