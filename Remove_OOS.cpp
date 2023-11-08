#include<bits/stdc++.h>
using namespace std;

void removeOutOfStockProducts(int arr[], int& n){
    int j=0;
    
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    n = j;
}

int main(){
    int arr[100], n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"Removing out of stock products ";
    removeOutOfStockProducts(arr, n);
    cout<<endl;
    cout<<"Updated array of product IDs: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}