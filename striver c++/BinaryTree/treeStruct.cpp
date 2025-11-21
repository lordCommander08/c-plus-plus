#include<bits/stdc++.h>
using namespace std;
struct  Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
void traversal(Node* root){
    cout<<"In-ORDER TRAVERSAL!"<<endl;
    cout<<root->left->data<<endl;
    cout<<root->data<<endl;
    cout<<root->right->data<<endl;
}
int main(){
    Node* root = new Node(30);
    root->left=new Node(10);
    root->right=new Node(50);
    traversal(root);
    return 0;
}