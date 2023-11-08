// You are using GCC
#include<iostream>
using namespace std;
// s is starting point of array and  e is ending point of array
void merge(int *arr, int s, int e){
	int mid = (s+e)/2;
	// len1 is length of array1
	int len1 = mid - s + 1;
	int len2 = e - mid;
	
	int *first = new int[len1];
	int *second = new int[len2];
	// k indicates main array index
	//copy values in array1
	int k = s;
	for(int i = 0; i<len1; i++){
		first[i] = arr[k++];
	}
	//copy values in array2
	// mid+1 is is starting point of an array2
	 k = mid+1;
	for(int i = 0; i<len2; i++){
		second[i] = arr[k++];
	}
	//merge 2 sorted arrays
	int index1 = 0;
	int index2 = 0;
	k = s;
	
	while(index1 < len1 && index2 < len2){
		if(first[index1] <  second[index2]){
			arr[k++] = first[index1++];
		}
		else{
			arr[k++] = second[index2++];
		}
	}
	
	while(index1 < len1){
		arr[k++] = first[index1++];
	}
	while(index2 < len2){
		arr[k++] = second[index2++];
	}
}

void mergeSort(int *arr, int s, int e){
	if(s>=e){
		return;
	}
	
	int mid = (s+e)/2;
	// for left side sorting
	mergeSort(arr, s,mid);
	
	// for right side sorting
	mergeSort(arr, mid+1, e);
	
	merge(arr,s,e);
}

int main(){
	int arr[10] = {43,65,21,33,19,12,42,27,81,11};
	int n = 10;
	
	mergeSort(arr, 0, n-1);
	
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
