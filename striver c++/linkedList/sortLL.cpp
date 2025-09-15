#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* convertll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* n=new Node(arr[i]);
        temp->next=n;
        temp=n;
    }
    return head;
}
Node* sortll(Node* head){
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    sort(arr.begin(),arr.end());
    int i=0;
    temp=head;
    while(temp!=NULL){
        temp->data=arr[i];
        i++;
        temp=temp->next;
    }
    return head;
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
    vector<int> arr={6,4,7,8,2,9,1};
    Node* head=convertll(arr);
    traverse(head);
    cout<<endl;
    cout<<"sorting the SLL"<<endl;
    sortll(head);
    traverse(head);
    return 0;
}