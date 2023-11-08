#include<bits/stdc++.h>
using namespace std;

//Stack with Linked List
/*
struct Node{
    int data;
    struct Node* next;
};

void push(struct Node **top, int value){
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = *top;
    *top = newnode;
}

void pop(struct Node **top){
    if(*top == NULL){
        cout<<"Stack Underflow";
        return;
    }
    struct Node* temp = *top;
    *top = temp->next;
    free(temp);
}

void display(struct Node *top){
    struct Node *temp = top;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    struct Node* top = NULL;
    cout<<"Linked List: ";
    while(1){
        int choice, value;
        //cout<<"Enter choice: ";
        cin>>choice;
        if(choice == 1){
            cin>>value;
            push(&top, value);
        }
        else if(choice == 2){
            pop(&top);
        }
        else if(choice == 3){
            display(top);
        }
        else{
            exit(0);
        }
    }
    return 0;
}    */


//Stack using Arrays

#define SIZE 3

void push(int value){
    if(top == SIZE - 1){
        cout<<"Stack Overflow";
    }
    else{
        top++;
        stack[top] = value;
    }
}

void pop(){
    if(top == -1){
        cout<<"Stack Underflow";
    }
    else{
        cout<<"The deleted element is: "<<stack[top];
        top--;
    }
}

void display(){
    if(top == -1){
        cout<<"Stack is empty";
    }
    else{
        int i;
        for(i = top; i >= 0; i--){
            cout<<stack[i]<<" ";
        }
    }
}
int stack[SIZE], top = -1;

int main(){
    int value, choice;
    while(1){
        cin>>choice;
        
        switch(choice){
            case 1:
            cin>>choice;
            push(value);
            break;
            
            case 2:
            pop();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            cout<<"Wrong statement";
            break;
        }
    }
    return 0;
}   

/*
int prec(char c){
    if(c=='^')
    return 3;
    else if(c == '/' || c == '*')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

void infixtopostfix(string s){
    stack<char> st;
    string result;
    // string l = s.length();

    for (int i = 0; i < s.length(); i++){
        char c = s[i];

        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c<='9')){
            result += c;
        }

        else if (c == '('){
			st.push('(');
        }

        else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}

        else {
			while (!st.empty()
				&& prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
    }

    while (!st.empty()) {
		result += st.top();
		st.pop();
	}

	cout << result << endl;
}

int main(){
    string exp;
    cout<<"enter exp: ";
    cin>>exp;
    infixtopostfix(exp);
    return 0;
}   */
