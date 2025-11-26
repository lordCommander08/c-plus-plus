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
vector<int> preordertraversal(Node* root){
    vector<int> ans;
    if(root==NULL) return ans;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        root=st.top();
        st.pop();
        ans.push_back(root->data);
        if(root->right!=NULL){
            st.push(root->right);
        }
        if(root->left!=NULL){
            st.push(root->left);
        }
    }
    return ans;
}
int main(){
    Node* root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(60);
    root->left->right=new Node(70);
    vector<int> res=preordertraversal(root);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}