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
Node* deleteathead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}
Node* deleteattail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    prev->next=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}
Node* deleteith(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* front=temp->next;
    if(prev==NULL || front==NULL){
        return NULL;
    }
    else if(front==NULL){
        return deleteattail(head);
    }
    else if(prev==NULL){
        return deleteathead(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}
Node* deletenthnode(Node* head,Node* node){
    if(node == NULL) return head;
    Node* prev = node->back;
    Node* front = node->next;
    if(front == NULL){
        prev->next = NULL;
        node->back = NULL;
        delete node;
        return head;
    }
    if(prev == NULL){
        head = head->next;
        head->back = NULL;
        node->next = NULL;
        delete node;
        return head;
    }
    prev->next = front;
    front->back = prev;
    node->next = node->back = NULL;
    delete node;
    return head;
}
 Node* insertathead(Node* head,int val){
        Node* temp=head;
        Node* newnode = new Node(val);
            temp->back=newnode;
            newnode->next=temp;
            newnode->back=nullptr;
            return newnode;
        
    }
Node* insertaftertail(Node* head,int val){
    Node* temp=head;
    Node* newnode=new Node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->back=temp;
    newnode->next=NULL;
    return head;
}
Node* insertbeforetail(Node* head,int val){
    if(head==NULL || head->next==NULL){
        return insertaftertail(head,val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newnode=new Node(val);
    prev->next=newnode;
    newnode->next=temp;
    temp->back=newnode;
    return head;
}
Node* insertatkth(Node* head,int val,int k){
    if(k==1){
        return insertathead(head,val);
    }
    Node* temp=head;
    int cnt=0;
    while(temp->next!=NULL){
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev=temp->back;
    Node* newnode=new Node(val);
    prev->next=newnode;
    newnode->back=prev;
    newnode->next=temp;
    temp->back=newnode;
    return head;
}
Node* insertnode(Node* head, Node* node, int val){
    if(node == NULL) return head;
    Node* prev=node->back;
    Node* newnode=new Node(val);
    newnode->next=node;
    node->back=newnode;
    if(prev!=NULL){
        prev->next=newnode;
        newnode->back=prev;
    } else {
        head=newnode;
    }
    return head;
}
int main(){
    vector<int> arr={23,24,25,26,27,28,29,30};
    Node* head=convertDll(arr);
    cout<<endl;
    traverse(head);
    cout<<endl;
    cout<<"deletion at head"<<endl;
    head=deleteathead(head);
    traverse(head);
    cout<<endl;
    cout<<"deletion at tail"<<endl;
    head=deleteattail(head);
    traverse(head);
    cout<<endl;
    cout<<"delete at ith position"<<endl;
    head=deleteith(head,2);
    traverse(head);
    cout<<endl;
    cout<<"delete the nth node"<<endl;
    head = deletenthnode(head,head->next);
    traverse(head);
    cout<<endl;
    cout<<"insert before the head"<<endl;
    head=insertathead(head,22);
    traverse(head);
    cout<<endl;
    cout<<"insert at tail"<<endl;
    head=insertaftertail(head,31);
    traverse(head);
    cout<<endl;
    cout<<"insert before the tail"<<endl;
    head=insertbeforetail(head,69);
    traverse(head);
    cout<<endl;
    cout<<"insert at kth position"<<endl;
    head=insertatkth(head,112,3);
    traverse(head);
    cout<<endl;
    cout<<"insert at the given node"<<endl;
    head=insertnode(head,head->next->next,111);
    traverse(head);
    cout<<endl;
    return 0;
}