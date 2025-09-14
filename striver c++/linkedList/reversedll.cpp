#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
        Node(int data1,Node* next1,Node* back1){
            data=data1;
            next=next1;
            back=back1;
        }
    public:
        Node(int data1){
            data=data1;
            next=nullptr;
            back=nullptr;
        }
};
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* convertDll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
Node* reversedll(Node* head){
    // Node* temp=head;
    // stack<int> st;
    // while(temp!=NULL){
    //     st.push(temp->data);
    //     temp=temp->next;
    // }
    // temp=head;
    // while(temp!=NULL){
    //     temp->data=st.top();
    //     st.pop();
    //     temp=temp->next;
    // }
    // return head;
    Node* curr=head;
    Node* last=NULL;
    while(curr!=NULL){
        last=curr->back;
        curr->back=curr->next;
        curr->next=last;
        curr=curr->back;
    }
    return last->back;
}
int main(){
    vector<int> arr={10,20,30,40,50};
    Node* head=convertDll(arr);
    traverse(head);
    cout<<"reverse a DLL"<<endl;
    head=reversedll(head);
    traverse(head);
    return 0;
}