#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int x): val(x),left(nullptr),right(nullptr){};
};
TreeNode* FindCeil(TreeNode* root){
    while(root!=NULL && root->right){
        root=root->right;
    }
    return root;
}
TreeNode* FindFloor(TreeNode* root){
    while(root!=NULL && root->left){
       root = root->left;
    }
    return root;
}
int main(){
    TreeNode* root=new TreeNode(4);
    root->right=new TreeNode(7);
    root->left=new TreeNode(2);
    root->left->right=new TreeNode(3);
    root->left->left=new TreeNode(1);
    TreeNode* ceill=FindCeil(root);
    TreeNode* floorr=FindFloor(root);
    cout<<"floor->val = "<<floorr->val<<endl;
    cout<<"ceil->val = "<<ceill->val<<endl;
}