#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
	Node(int d){
		this->data = d;
		this->left = nullptr;
		this->right = nullptr;
	}
};

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        
        if(temp = NULL){ //prev level traversal completed
            cout<<endl;
            if(!q.empty()){ //queue still has some child nodes
                q.push(NULL);
            }
        }
        
        else{
        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    }
}

Node* insertIntoBST(Node* root, int d){
	if(root == nullptr){
		root = new Node(d);
		return root;
	}
	
	if(d > root->data){
		root->right = insertIntoBST(root->right, d);
	}
	else{
		root->left = insertIntoBST(root->left, d);
	}
	
	return root;
}

void TakeInput(Node* &root){
	int data;
	cin>>data;
	
	while(data != -1){
		root = insertIntoBST(root, data);
		cin>>data;
	}
}

Node* deleteFromBST(Node* root, int val){
	//base case
	if(root == nullptr){
		return root;
	}
	
	if(root->data == val){
		//0 child
		if(root->left == nullptr && root->right == nullptr){
			delete root;
			return nullptr;
		}
		
		//1 child
		
		//left child
		if(root->left != nullptr && root->right == nullptr){
			Node*temp = root->left;
			delete root;
			return temp;
		}
		
		//right child
		if(root->left == nullptr && root->right != nullptr){
			Node* temp = root->right;
			delte root;
			return temp;
		}
		
		//2 children
		if(root->left != nullptr && root->right != nullptr){
			int mini = minVal(root->right)->data;
			root->data = mini;
			root->right= deleteFromBST(root->right, mini);
			return root;
		}
	}
}

int main(){
	Node* root =nullptr;
	
	cout<<"Enter data to create BST: "<<endl;
	takeInput(root);
	
	root = deleteFromBST(root, 90);
	
	cout<<"Printing the BST: "<<endl;
	levelOrderTraversal(root);
}
