#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
void traversal(Node* root){
    if(root == NULL) return;
    traversal(root->left);      
    cout << root->data << " ";  
    traversal(root->right);
}
int main(){
    Node* root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    traversal(root);
    return 0;
}