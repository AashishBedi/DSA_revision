#include<bits/stdc++.h>
using namespace std;

int findSecondSmallest(int arr[], int n){
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;
    
    for(int i=0; i<n; i++){
        if(arr[i] < smallest){
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest){
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}

int main(){
    int arr[100];
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    int secondSmallest = findSecondSmallest(arr, n);
    cout<<"Second Smallest Element: "<<secondSmallest<<endl;
}