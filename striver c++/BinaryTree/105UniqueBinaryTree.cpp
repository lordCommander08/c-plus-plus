#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode (int x): val(x),left(nullptr),right(nullptr){}
};

TreeNode* buildHelper(vector<int>& preorder,int preStart,int preEnd,vector<int>& inorder,int inStart,int inEnd,unordered_map<int,int>& mpp){
    if(preStart>preEnd || inStart>inEnd) return nullptr;
    TreeNode* root=new TreeNode(preorder[preStart]);
    int inroot=mpp[root->val];
    int numsleft=inroot-inStart;
    root->left=buildHelper(preorder,preStart+1,preStart+numsleft,inorder,inStart,inroot-1,mpp);
    root->right=buildHelper(preorder,preStart+numsleft+1,preEnd,inorder,inroot+1,inEnd,mpp);
    return root;
}
TreeNode* buildTree(vector<int>& preorder,vector<int>& inorder){
    unordered_map<int,int> mpp;
    for(int i=0;i<inorder.size();i++){
        mpp[inorder[i]]=i;
    }
    TreeNode* root=buildHelper(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,mpp);
    return root;
}
void printLevelOrder(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        while (size--) {
            TreeNode* node = q.front();
            q.pop();

            cout << node->val << " ";

            if (node->left)  q.push(node->left);
            if (node->right) q.push(node->right);
        }
        cout << endl;
    }
}
int main(){
    vector<int> inorder={40,20,50,10,60,30};
    vector<int> preorder={10,20,40,50,30,60};
    TreeNode* root=buildTree(preorder,inorder);
    printLevelOrder(root);
}