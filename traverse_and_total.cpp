#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[100], n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int tot = 0;
    for(int i=0; i<n; i++){
        tot += arr[i];
    }
    
    cout<<tot<<endl;
}