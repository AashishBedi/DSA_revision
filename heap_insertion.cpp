#include<bits/stdc++.h>
using namespace std;

class heap{
	public:
		int arr[100];
		int size =0;
		
	void insert(int val){
		size = size + 1;
		int index = size;
		arr[index] = val;
		
		while(index > 1){
			int parent;
			parent = index/2;
			
			if(arr[parent] < arr[index]){
				swap(arr[parent], arr[index]);
				index = parent;
			}
			else{
				return;
			}
		}
	}
	
	void print(){
		for(int i=1; i<= size; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	void heapify(int arr[], int n, int i){
		int largest = i;
		int left = 2*i;
		int right= 2*i + 1;
		
		if(left<n && arr[largest]<arr[left]){
			largest = left;
		}
		if(right<n && arr[largest] < arr[right]){
			largest = right;
		}
		
		if(largest != i){
			swap(arr[largest], arr[i]);
			heapify(arr, n, largest);
		}
	}
	
	void deletefromHeap(){
		if(size == 0){
			cout<<"nothing to delete";
			return;
		}
		//step1
		arr[1] = arr[size];
		//step2
		size--;
		
		//step3: taking root to the right place
		int i=1;
		while(i<size){
			int leftIndex = 2*i;
			int rightIndex = 2*i + 1;
			
			if(leftIndex < size && arr[i] < arr[leftIndex]){
				swap(arr[i], arr[leftIndex]);
				i = leftIndex;
			}
			else if(rightIndex<size && arr[i] < arr[rightIndex]){
				swap(arr[i], arr[rightIndex]);
				i = rightIndex;
			}
			else{
				return;
			}
		}
	}
};

int main(){
//	heap h;
//	int n, val;
//	cin>>n;
	
//	for(int i=0; i<n; i++){
//		cin>>val;
//		h.insert(val);
//	}
//	h.print();
	
//	h.deletefromHeap();
//	h.print();
	
	int arr[7] = {-1, 34, 23, 76, 47, 44, 24};
	int n=6;
	for(int i= n/2; i>0; i--){
		heapify(arr,n,i);
	}
	cout<<endl;
	for(int i=0; i<=n; i++){
		cout<<arr[i]<<" ";
	}
}
