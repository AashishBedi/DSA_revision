#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> bst(n);
	
	for(int i=0; i<n; i++){
		cin>>bst[i];
	}
	
	int key;
	cin>>key;
	if(find(bst.begin(), bst.end(), key) != bst.end()){
		cout<<"Element found";
	}
	else{
		cout<<"element not found";
	}
}
