//Deletion from a max-heap
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    priority_queue<int> maxHeap;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        
        maxHeap.push(num);
        cout<<"Heap after inserting "<<num<<" : ";
        priority_queue<int> temp = maxHeap;
        while(!temp.empty()){
            cout<<temp.top()<<" ";
            temp.pop();
        }
        cout<<endl;
    }
    maxHeap.pop();
    cout<<"Heap after deleting maximum element: ";
    priority_queue<int> temp = maxHeap;
    
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}