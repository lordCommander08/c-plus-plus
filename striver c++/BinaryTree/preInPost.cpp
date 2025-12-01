#include<bits/stdc++.h>
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

vector<vector<int>> preInPost(Node* root) {
    vector<int> pre, in, post;
    if (root == NULL) return {pre, in, post};

    stack<pair<Node*, int>> st;
    st.push({root, 1});

    while (!st.empty()) {
        auto it = st.top();
        st.pop();

        if (it.second == 1) {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->left != NULL)
                st.push({it.first->left, 1});
        }
        else if (it.second == 2) {
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if (it.first->right != NULL)
                st.push({it.first->right, 1});
        }
        else {
            post.push_back(it.first->data);
        }
    }

    return {pre, in, post};
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    vector<vector<int>> ans = preInPost(root);

    cout << "Preorder: ";
    for (int x : ans[0]) cout << x << " ";
    cout << "\n";

    cout << "Inorder: ";
    for (int x : ans[1]) cout << x << " ";
    cout << "\n";

    cout << "Postorder: ";
    for (int x : ans[2]) cout << x << " ";
    cout << "\n";

    return 0;
}