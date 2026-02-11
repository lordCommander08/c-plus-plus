#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
          int val;
          TreeNode* right;
          TreeNode* left;
    TreeNode (int x): val(x),left(nullptr),right(nullptr){}
};
TreeNode* helper(TreeNode* root,int val){
    while(root!=NULL && root->val!=val){
        root=val<(root->val)?root->left:root->right;
    }
    return root;
}
int main(){
    TreeNode* root=new TreeNode(4);
    root->left=new TreeNode(2);
    root->left->right=new TreeNode(3);
    root->left->left=new TreeNode(1);
    root->right=new TreeNode(7);
    TreeNode* res = helper(root, 3);
if(res != NULL)
    cout << "Found node with value: " << res->val << endl;
else
    cout << "Value not found" << endl;
}