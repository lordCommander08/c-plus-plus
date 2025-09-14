#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=NULL;
}
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    }
void insertatend(int val){
    Node*temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}
void insertathead(int val){
    Node*temp=new Node(val);
    if(size==0) 
    head=tail=temp;
    else{
        temp->next=head;
        head=temp;
    }
    size++;
}
void insertatidx(int idx,int val){
    if(idx<0|| idx>size){
        cout<<"invalid index"<<endl;
        return;
    }
    else if(idx==0){
        insertathead(val);
        return;
    }
    else if(idx==size)
    {
        insertatend(val);
        return;
    }
    else{
        Node*t = new Node(val);
        Node* temp =head;
        for(int i=1;i<=idx-1;i++)
        {
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
    }
}
int getatidx(int idx){
    if(idx<0|| idx>=size){
        cout<<"invalid idx"<<endl;
        return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        Node * temp =head;
        for(int i=1;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
}
void deleteathead(){
    if(size==0){
        cout<<"list is empty"<<endl;
        return ;
    }
    head=head->next;
    size--;
}
 void deleteattail(){
        if(size==0)
        cout<<"list is empty!"<<endl;
        Node* temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        // tail=temp;
        size--;
        cout<<endl;
    }
void deleteatidx(int idx){
    if(size==0){
        cout<<"list is empty!"<<endl;
        return;
    }
    else if(idx==0) return deleteathead();
    else if(idx==size-1) return deleteattail();
    else{
        Node* temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
        cout<<endl;
    }
}
void display()
{
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main()
{
 LinkedList ll;
 ll.insertatend(20);
 ll.display();
 ll.insertatend(50);
 ll.display();
 cout<<"Size: "<<ll.size<<endl;
 ll.insertathead(69);
 ll.display(); 
 cout<<"Size: "<<ll.size<<endl;
 ll.insertatidx(2,12);
 ll.display();
 cout<<"size: "<<ll.size<<endl;
 cout<<"value at given idx: "<<ll.getatidx(2)<<endl;
 ll.deleteathead();
 ll.display();
 cout<<"size: "<<ll.size<<endl;
 ll.deleteattail();
 ll.display();
//   cout<<"size: "<<ll.size<<endl;
ll.deleteatidx(1);
ll.display();
}   