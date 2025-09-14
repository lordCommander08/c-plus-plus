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
int main(){
    vector<int> arr={10,11,12,13,14};
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<arr.size();i++){
        Node* n=new Node(arr[i]);
        temp->next=n;
        temp=n;
}
    temp->next=NULL;
    temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
