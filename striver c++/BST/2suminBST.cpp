#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
        int val;
        TreeNode* left;
        TreeNode* right;
    TreeNode(int x):val(x),left(nullptr),right(nullptr){};
};
// void inorder(TreeNode* root,vector<int>& ans){
//     if(root==NULL) return;
//     inorder(root->left,ans);
//     ans.push_back(root->val);
//     inorder(root->right,ans);
// }
bool findTarget(TreeNode* root,int k){
    unordered_set<int> set;
    if(root!=NULL) return false;
    if(set.count(k-root->val)) return true;
    set.insert(root->val);
    return findTarget(root->left,k) || findTarget(root->right,k);
}
int main(){
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(8);
    findTarget(root,12);
    if(findTarget){
        cout<<"present";
    }
    if(!findTarget) cout<<"not present";
    // vector<int> ans;
    // inorder(root,ans);
    // int k=69;
    // int left=0,right=ans.size()-1;
    // bool found=false;
    // while(left<right){
    //     int sum=ans[left]+ans[right];
    //     if(sum==k){
    //         cout<<"2 nodes are present whose sum is equal to the given sum"<<endl;
    //         found=true;
    //         break;
    //     }
    //     else if(sum<k) left++;
    //     else right--;
    // }
    // if(!found){
    //     cout<<"no two nodes are present whose sum is equal to the given value"<<endl;
    // }
}