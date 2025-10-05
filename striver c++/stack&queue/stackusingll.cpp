#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int value){
        data=value;
        next=NULL;
    }
};
class Stack{
    Node* top;
    public:
        Stack(){
        top=NULL;
    }
    void push(int x){
        Node* newNode = new Node(x);
        newNode->next=top;
        top = newNode;
        cout<<x<<" pushed value.\n";
    }
    void pop(){
        if(top==NULL){
            cout<<"stack is empty";
            return;
        }
        Node* temp=top;
        top=top->next;
        cout<<"popped element = "<<temp->data<<"\n";
        delete temp;
    }
    void peek(){
        if(top==NULL){
            cout<<"stack is empty";
            return;
        }
        cout<<"peek element = "<<top->data<<"\n";
    }
    bool isempty(){
        return top==NULL;
    }
    void print(){
        Node* temp=top;
        cout<<"Stack elements are :  ";
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.print();
    s.pop();
    s.pop();
    s.peek();
    s.print();
}