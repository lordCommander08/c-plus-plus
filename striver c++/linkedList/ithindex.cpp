#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* insertatith(Node* head,int data,int k){
    Node* newnode= new Node(data);
    if(head==NULL){
        return newnode;
    }
    if(k==1){
        newnode->next=head;
        head=newnode;
        return head;

    }
    Node* temp=head;
    Node* prev=NULL;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=newnode;
            newnode->next=head;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    if(temp==NULL){
        prev->next=newnode;
    }
    return head; 
}
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=NULL;
    Node* head=&a;
    traverse(head);
    cout<<endl;
    cout<<"data after adding element at ith place"<<endl;
    insertatith(head,50,5);
    traverse(head);
    return 0;
}