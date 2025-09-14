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
int main()
{
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    d.next=&a;
    // cout<<d.next->val<<" "<<endl; ** last node of the linked list is connected to the first node hence form the cycle or we can say that it is doubly linked list
    cout<<a.val<<endl;
    cout<<(a.next)->val<<endl;// cout<<(*(a.next)).val<<endl;
    cout<<((a.next)->next)->val<<endl;
    cout<<(((a.next)->next)->next)->val<<endl;
    cout<<a.next<<endl;
    cout<<(b.next)->val<<endl;
    Node temp=a;
    cout<<"Address of Temp:"<<&temp<<endl;
    // getting output using loop //
    cout<<"Getting output with while loop: ";
    // while(1){
    //     cout<<temp.val<<" ";
    //     if(temp.next==NULL)
    //     break;
    //     temp=*(temp.next);
    // }
}