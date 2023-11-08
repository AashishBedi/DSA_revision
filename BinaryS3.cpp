#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int missingNumber(int arr[], int n, int x){
        set<int> s(arr, arr + n);
        for(int i= x+1; i<= n+x+1; i++){
            if(!s.count(i)){
                return i;
            }
        }
        return -1;
    }
};

int main(){
    int n, x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cin>>x;
    Solution sol;
    int result = sol.missingNumber(arr, n, x);
    cout<<"The smallest missing positive int greater than "<<x<<" is "<<result;
}