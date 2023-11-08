#include<bits/stdc++.h>
using namespace std;
//Queue using Linked List
/*
struct Node{
    int data;
    struct Node* next;
}*front, *rear;

void enqueue(int value){
    Node *newnode = new Node();
    newnode->data = value;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
    }
    else{
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue(){
    struct Node *temp = front;
    if(front == NULL){
        cout<<"Queue Underflow";
    }
    else{
        cout<<"The deleted element is: "<<front->data<<endl;
        front = front->next;
        if(front == NULL){
            rear == NULL;
        }
        free(temp);
    }
}

void display(){
    struct Node *temp = front;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int choice, value;
    while(1){
        cin>>choice;
        switch(choice){
            case 1:{
                cin>>value;
                enqueue(value);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                exit(0);
            }
            default:
            cout<<"Wong Selection";
            break;
        }
    }
}
*/



//Queue using Arrays
#define SIZE 3
int front = 0;
int rear = 0;
int Queue[SIZE];

void enqueue(int value){
    if(rear == SIZE){
        cout<<"Queue Overflow"<<endl;
    }
    else{
        Queue[rear] = value;
        rear++;
    }
}

void dequeue(){
    if(front == rear){
        cout<<"Queue Underflow"<<endl;
    }
    else{
        cout<<"The deleted element is: "<<Queue[front]<<endl;
        front++;
    }
}

void display(){
    if(front == rear){
        cout<<"Queue is empty"<<endl;
    }
    else{
        int i;
        for(i = front; i<rear; i++){
            cout<<Queue[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int choice, value;
    while(1){
        cin>>choice;
        switch(choice){
            case 1:{
                cin>>value;
                enqueue(value);
                break;
            }
            case 2:{
                dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            case 4:{
                exit(0);
            }
            default:
            cout<<"Wrong Selection";
            break;
        }
    }
}