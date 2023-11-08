#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    
    cin>>n;
    vector<int> arrA(n);
    for(int i = 0; i<n; i++){
        cin>>arrA[i];
    }
    
    cin>>m;
    vector<int> arrB(m);
    for(int i = 0; i<m; i++){
        cin>>arrB[i];
    }
    
    
    vector<int> mergedArray(n + m);
    merge(arrA.begin(), arrA.end(),  arrB.begin(), arrB.end(),  mergedArray.begin());
    for(int i=0; i< n+m; i++){
        cout<<mergedArray[i]<<" ";
    }
}