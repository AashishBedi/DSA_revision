// merging and string with integer alternative op
#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Merged Array: ";
    int size;
    cin>>size;
    
    vector<string> arrA(size);
    for(int i=0; i< size; i++){
        cin>>arrA[i];
    }
    
    vector<int> arrB(size);
    for(int i=0; i<size; i++){
        cin>>arrB[i];
    }
    
    
    vector<string> mergedArray;
    for(int i=0; i<size; i++){
        mergedArray.push_back(arrA[i]);
        mergedArray.push_back(to_string(arrB[i]));
    }
    
    for(string& element: mergedArray){
        cout<<element<<" ";
    }
}