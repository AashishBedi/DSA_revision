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
    
    int index = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
    
    if(index != -1){
        cout<<"element "<<target<<" is present at index "<<index;
    }
    else{
        cout<<"Element "<<target<<" is not present";
    }
}