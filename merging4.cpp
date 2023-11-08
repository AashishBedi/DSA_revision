// merging and sum between corresponding elements
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
    
    if(n != m){
       cout<<"Arrays must be of the same size";
    return 1;
    }
    
    cout << "The sum of corresponding elements is:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << arrA[i] + arrB[i] << " ";
    }
}