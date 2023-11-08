#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int target;
    cin>>target;
    
    bool found = false;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            found=  true;
            break;
        }
    }
    
    if(found){
        cout<<"element "<<target<<" is present";
    }
    else{
        cout<<"Element "<<target<<" is not present";
    }
}