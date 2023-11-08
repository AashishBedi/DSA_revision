//Insertion into a min-heap
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        minHeap.push(num);
        
        cout<<"Heap After inserting "<<num<<": ";
        priority_queue<int, vector<int>, greater<int>> temp = minHeap;
        
        while(!temp.empty()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
}