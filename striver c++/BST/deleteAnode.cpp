#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* right;
        TreeNode* left;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
};
TreeNode* lastRight(TreeNode* root){
    if(root->right==NULL) return root;
    return lastRight(root->right);
}
TreeNode* helper(TreeNode* root){
    if(root->left==NULL) return root->right;
    else if(root->right==NULL) return root->left;
    TreeNode* rightchild=root->right;
    TreeNode* lastRightt=lastRight(root->left);
    lastRightt->right=rightchild;
    return root->left;
}
int main(){
    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(3);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(4);
    root->right=new TreeNode(6);
    root->right->right=new TreeNode(7);
    if(root==NULL) cout<<"empty tree"<<endl;
    int key=3;
    if(root->val==key){
        root =  helper(root);
    }
     else{
        TreeNode* curr = root;
        while(curr != NULL){
            if(key < curr->val){
                if(curr->left != NULL && curr->left->val == key){
                    curr->left = helper(curr->left);
                    break;
                }
                else curr = curr->left;
            }
            else{
                if(curr->right != NULL && curr->right->val == key){
                    curr->right = helper(curr->right);
                    break;
                }
                else curr = curr->right;
            }
        }
    }
    cout<<root->val;
}