#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
          int val;
          TreeNode* right;
          TreeNode* left;
    TreeNode (int x): val(x),left(nullptr),right(nullptr){}
};
TreeNode* buildTree(vector<int>& inorder,int is,int ie,vector<int>& postorder,int ps,int pe,unordered_map<int,int>& mpp){
    if(is>ie || ps>pe) return nullptr;
    TreeNode* root=new TreeNode(postorder[pe]);
    int inroot=mpp[root->val];
    int numsleft=inroot-is;
    root->left=buildTree(inorder,is,inroot-1,postorder,ps,ps+numsleft-1,mpp);
    root->right=buildTree(inorder,inroot+1,ie,postorder,ps+numsleft,pe-1,mpp);
    return root;
}
TreeNode* buildHelper(vector<int>& inorder,vector<int>& postorder){
    if(inorder.size()!=postorder.size()) return nullptr;
    unordered_map<int,int> mpp;
    for(int i=0;i<inorder.size();i++){
        mpp[inorder[i]]=i;
    }
    return buildTree(inorder,0,inorder.size()-1,postorder,0,postorder.size()-1,mpp);
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
    vector<int> postorder={40,50,20,60,30,10};
    TreeNode* root=buildHelper(inorder,postorder);
    printLevelOrder(root);
}