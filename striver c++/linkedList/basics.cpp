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
void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node* deleteathead(Node* head){
    if(head==NULL){
        cout<<"LL is empty";
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}
Node* deleteattail(Node* head){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return head;
    }
    if(head->next==NULL){
        delete head;
        return NULL;
    }
    Node* temp=head;
    while(temp->next->next!=NULL){
       temp=temp->next;
    }
    delete (temp->next);
    temp->next=NULL;
    return head;
}
Node* deleteith(Node* head,int k){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return NULL;
    }
if(head->next==NULL){
    delete head;
    return NULL;
}
    Node* temp=head;
    Node* prev=NULL;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
Node* insertathead(Node* head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}
Node* insertattail(int data,Node* head){
    if(head==NULL){
        return new Node(data);
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode= new Node(data);
    temp->next=newnode;
    return head;
}
Node* insertatith(Node* head,int data,int k){
    Node* newnode=new Node(data);
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
            newnode->next=temp;
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
    Node e(50);
    Node f(60);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&e;
    e.next=&f;
    f.next=NULL;
    Node* temp=&a;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    cout<<((a.next)->data)<<endl;
    cout<<(((a.next)->next)->data)<<endl;
    cout<<((((a.next)->next)->next)->data);
    cout<<endl;
    cout<<"printing SLL using While Loop"<<endl;
    int count=0;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<"no. of nodes: "<<count<<endl;
    cout<<&a<<endl;
    cout<<"data after deleting the head"<<endl;
    Node* head=&a;
    head = deleteathead(head);
    temp=head;
    traverse(temp);
    cout<<endl;
    cout<<"data after deleting the tail"<<endl;
    head=deleteattail(head);
    temp=head;
    traverse(temp);
    cout<<endl;
    cout<<"deleting node at the given ith"<<endl;
    head=deleteith(head,3);
    traverse(head);
    cout<<endl;
    cout<<"inserting node at head"<<endl;
    head=insertathead(head,5);
    traverse(head);
    cout<<endl;
    cout<<"insert at tail"<<endl;
    head=insertattail(100,head);
    traverse(head);
    cout<<endl;
    cout<<"insert at ith position"<<endl;
    head=insertatith(head,25,4);
    traverse(head);
    return 0;
}