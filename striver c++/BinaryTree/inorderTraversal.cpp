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
vector<int> inordertraversal(Node* root){
    stack<Node*> st;
    Node* node=root;
    vector<int> inorder;
    while(true){
        if(node!=NULL){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true)break;
            node=st.top();
            st.pop();
            inorder.push_back(node->data);
            node=node->right;
        }
    }
    return inorder;
}
int main(){
    Node* root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(60);
    root->left->right=new Node(70);
    vector<int> res=inordertraversal(root);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}