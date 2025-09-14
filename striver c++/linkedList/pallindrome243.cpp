#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        this->data=data1;
        this->next=nullptr;
    }
};
Node* converll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* n=new Node(arr[i]);
        temp->next=n;
        temp=n;
}
return head;
}
bool ispallindrome(Node* head){
    stack<int> st;
    Node* temp=head;
    while(temp!=NULL){
        st.push(temp->data);
        temp=temp->next;
    }
    temp= head;
    while(temp!=NULL){
        if(temp->data!=st.top()) return false;
        temp=temp->next;
        st.pop();
    }
    return true;
}
void traverse(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int> arr={10,20,30,20,10};
    Node* head=converll(arr);
    traverse(head);
    cout<<"checking if the ll is pallindrome or not"<<endl;
    if(ispallindrome(head)==true){
        cout<<"LL is plaiindrome";
    }
    else{
        cout<<"ll is not pallindrome";
    }

}