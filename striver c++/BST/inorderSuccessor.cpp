#include<bits/stdc++.h>
using namespace std;
Class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
};
void findInorderSuccessor(TreeNode* root,vector<int>& ans){
    if(root==NULL) return;
    findSuccessor(root->left,ans);
    ans.push_back(root->val);
    findSuccessor(root->right,ans);
}
int main(){
    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(3);
    root->right=new TreeNode(6);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(4);
    vector<int> ans;
    findSuccessor(root,ans);
    for(int i=0;i<ans.size();i++){
        if(ans[i]==2){
            if(i+1<ans.size()) cout<<ans[i+1]->val;
            else cout<<"-1";
        }
    }
    cout<<"not found"<<endl;
}