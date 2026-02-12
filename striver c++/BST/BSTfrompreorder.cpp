#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
};
TreeNode* buildbst(vector<int>& inorder,int low,int high){
        if(low>high)return NULL;
        int mid=(low+high)/2;
        TreeNode* root=new TreeNode(inorder[mid]);
        root->left=buildbst(inorder,low,mid-1);
        root->right=buildbst(inorder,mid+1,high);
        return root;

    }
void printInorder(TreeNode* root){
    if(root==NULL) return;
    printInorder(root->left);
    cout<<root->val<<" ";
    printInorder(root->right);
}
int main(){
    vector<int> preorder={8,5,1,7,10,12};
    sort(preorder.begin(),preorder.end());
    TreeNode* root=buildbst(preorder,0,preorder.size()-1);
    printInorder(root);
}