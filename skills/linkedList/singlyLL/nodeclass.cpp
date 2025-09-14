// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node(int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// int main()
// {
//     Node*a =new Node(10);
//     Node*b =new Node(30);
//     Node*c =new Node(50);
//     Node*d =new Node(70);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=NULL;
//     cout<<(((a->next)->next)->next)->val<<endl;
//     Node temp=*a;
//     while(1){
//         cout<<temp.val<<" ";
//         if(temp.next==NULL) break;
//         temp=(*(temp.next));
//     }
//     return 0;
// }

// using display function //
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
void Display(Node* head){
    Node*temp=head;
    while(temp!=NULL){
    cout<<temp->val<<" ";
    temp=temp->next;}
    cout<<endl;
}
int Size(Node* head){
    int n=0;
    Node*temp=head;
    while(temp!=NULL){
        temp=temp->next;
        n=n+1;
    }
    return n;
}
int main()
{
    Node*a =new Node(10);
    Node*b =new Node(30);
    Node*c =new Node(50);
    Node*d =new Node(70);
    Node*e =new Node(90);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=NULL;
    // cout<<(((a->next)->next)->next)->val<<endl;
    // Node temp=*a;
    Display(a);
    cout<<"size of Linked List = "<<Size(a)<<endl;
    return 0;
}