// K sorted arrays into one array in descending order
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    
    cin>>n;
    vector<int> arrA(n);
    for(int i=0; i<n; i++){
        cin>>arrA[i];
    }
    
    cin>>m;
    vector<int> arrB(m);
    for(int i=0; i<m; i++){
        cin>>arrB[i];
    }
    
    
    vector<int> mergedArray(n + m);
    int idxA = 0, idxB = 0, idxMerged = 0;
    
    
    while(idxB < m){
        mergedArray[idxMerged++] = arrB[idxB++];
    }
    
    while(idxA < n){
        mergedArray[idxMerged++] = arrA[idxA++];
    }
    for(int i=0; i < n+m; i++){
        cout<<mergedArray[i];
        if(i != n + m  - 1){
            cout<<" ";
        }
    }
}