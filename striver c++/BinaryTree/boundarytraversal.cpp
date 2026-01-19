#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

class Solution {
    bool isleaf(Node* node) {
        return (node->left == NULL && node->right == NULL);
    }

    void addleft(Node* root, vector<int>& res) {
        Node* cur = root->left;
        while (cur) {
            if (!isleaf(cur))
                res.push_back(cur->data);
            if (cur->left)
                cur = cur->left;
            else
                cur = cur->right;
        }
    }

    void addright(Node* root, vector<int>& res) {
        Node* cur = root->right;
        vector<int> temp;
        while (cur) {
            if (!isleaf(cur))
                temp.push_back(cur->data);
            if (cur->right)
                cur = cur->right;
            else
                cur = cur->left;
        }
        for (int i = temp.size() - 1; i >= 0; i--)
            res.push_back(temp[i]);
    }

    void addleave(Node* root, vector<int>& res) {
        if (isleaf(root)) {
            res.push_back(root->data);
            return;
        }
        if (root->left)
            addleave(root->left, res);
        if (root->right)
            addleave(root->right, res);
    }

public:
    vector<int> boundaryTraversal(Node* root) {
        vector<int> res;
        if (!root)
            return res;

        if (!isleaf(root))
            res.push_back(root->data);

        addleft(root, res);
        addleave(root, res);
        addright(root, res);

        return res;
    }
};

int main() {
    /*
            1
          /   \
         2     3
        / \     \
       4   5     6
          / \
         7   8

    Boundary Traversal:
    1 2 4 7 8 6 3
    */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->left->right->left = new Node(7);
    root->left->right->right = new Node(8);

    root->right->right = new Node(6);

    Solution obj;
    vector<int> result = obj.boundaryTraversal(root);

    cout << "Boundary Traversal: ";
    for (int x : result)
        cout << x << " ";

    return 0;
}