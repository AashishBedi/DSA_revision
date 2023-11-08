#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a[n], b[n];
    for(int i = 0; i<n; i++){
        cin>>a[i]; //daily closing prices of the stock
    }
    for(int i = 0; i<n; i++){
        cin>>b[i]; //threshold values for each day
    }
    
    int count = 0;
    for(int i=0; i<n-1; i++){
        if(abs(a[i+1] - a[i]) >= b[i]){
            count++;
        }
    }
    cout<<count;
}