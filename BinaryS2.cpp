// You are using GCC
#include<iostream>
#include<vector>
using namespace std;
int countOccurences(vector<int>& arr, int target){
    int left =0, right = arr.size() - 1;
    int firstOccurence = -1;
    
    while(left<= right){
        int mid = left +(right - left)/2;
        if(arr[mid] == target){
            firstOccurence = mid;
            right = mid-1;
        }
        else if(arr[mid]< target){
            left = mid + 1;
        }
        else{
            right = mid-1;
        }
    }
    
    if(firstOccurence == -1){
        return 0;
    }
    
    int lastOccurence = -1;
    left =0, right = arr.size() - 1;
    while(left<= right ){
        int mid = left+ (right - left)/2;
        if(arr[mid] == target){
            lastOccurence = mid;
            left = mid+1;
        }
        else if(arr[mid] < target){
            left = mid + 1;
        }
        else{
            right = mid - 1;
        }
    }
    return lastOccurence - firstOccurence + 1;
}
int main(){
    int n;
    cin>> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int target; 
    cin>> target;
    int frequency = countOccurences(arr, target);
    cout<<frequency<<endl;
    
    return 0;
}