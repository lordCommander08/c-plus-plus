#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

vector<int> postorder1stack(Node* root) {
    vector<int> postorder;
    if (root == NULL) return postorder;

    stack<Node*> st;
    Node* curr = root;

    while (curr != NULL || !st.empty()) {
        if (curr != NULL) {
            st.push(curr);
            curr = curr->left;
        } 
        else {
            Node* temp = st.top()->right;

            if (temp == NULL) {
                temp = st.top();
                st.pop();
                postorder.push_back(temp->data);

                while (!st.empty() && temp == st.top()->right) {
                    temp = st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            } 
            else {
                curr = temp;
            }
        }
    }
    return postorder;
}

int main() {
    Node* root = new Node(30);
    root->left = new Node(40);
    root->right = new Node(50);
    root->left->left = new Node(60);
    root->left->right = new Node(70);

    vector<int> res = postorder1stack(root);

    for (int x : res) {
        cout << x << " ";
    }
    return 0;
}