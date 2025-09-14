#include<iostream>
using namespace std;
class Node{
public:
 int val;
 Node* next;
 Node(int val)
 {
    this->val=val;
    this->next=NULL;
 }
};
class LinkedList{
public: 
    Node* head;
    Node* tail;
    int size;
    LinkedList()
    {
        head=tail=NULL;
        size=0;
    }
    void insertatend(int val){
        Node* temp=new Node(val);
        if(size==0) tail=head=temp;
        else{
            tail->next=temp;
            tail=temp;
        }
        size++;
        cout<<endl;
    }
    void insertathead(int val)
    {
        Node* temp=new Node(val);
        if(size==0) tail=head=temp;
        else{
            temp->next=head;
            head=temp;
        }
        size++;
        cout<<endl;
    }
    void insertatidx(int idx,int val){
        if(idx<0 || idx>size) cout<<"invalid index"<<endl;
        else if(idx==0) insertathead(val);
        else if(idx==size) insertatend(val);
       else{
         Node* t=new Node(val);
        Node* temp = head;
        for(int i=0;i<idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
        cout<<endl;
    }
    }

    void dltathead()
    {
        if(size==0)
    {
        cout<<"list is empty!"<<endl;
        return;
    }
    head=head->next;
    size--;
    cout<<endl;
    }

    void dltattail(){
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
    void dltatidx(int idx)
    {
        if(size==0){
            cout<<"list is empty!"<<endl;
            return;
        }
        else if(idx==0) return dltathead();
        else if(idx==size) return dltattail();
        else{
            Node* temp=head;
            for(int i=0;i<idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            size--;
            cout<<endl;
        }
    }
    void Display()
    {
        Node* temp=head;
        while(temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    Node* a=new Node(10);
    Node* b=new Node(20);
    Node* c=new Node(30);
    Node* d=new Node(40);
    Node* e=new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    LinkedList ll;
    ll.insertatend(20);
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.insertathead(30);
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.insertathead(69);
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.insertatend(108);
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.insertatidx(4,68);
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.dltathead();
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.dltattail();
    ll.Display();
    cout<<"Size of Linked list: "<<ll.size;
    ll.dltatidx(1);
    ll.Display();
    cout<<"Size of Linked List: "<<ll.size;
} 