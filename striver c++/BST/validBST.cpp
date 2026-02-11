#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
};
void inorder(TreeNode* root,vector<int>& ans){
    if(root==NULL) return;
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
int  main(){
    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(1);
    root->left->right=new TreeNode(2);
    root->right=new TreeNode(4);
    vector<int> ans;
    inorder(root,ans);
    bool isvalid=true;
    for(int i=1;i<ans.size();i++){
        if(ans[i]<=ans[i-1]){
            isvalid=false;
            break;
        }
    }
    if(isvalid) cout<<"valid BST"<<endl;
    if(!isvalid) cout<<"invalid BST";
}