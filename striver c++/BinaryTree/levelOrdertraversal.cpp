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
vector<vector<int>> levelorder(Node* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int n=q.size();
        vector<int> level;
        while(n--){
            Node* temp=q.front();
            q.pop();
            level.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){
    Node* root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(60);
    root->left->right=new Node(70);
    vector<vector<int>> result=levelorder(root);
    for(auto level : result){ 
        for(auto value : level){
            cout << value << " ";
        }
        cout << endl;
    }
    return 0;
}