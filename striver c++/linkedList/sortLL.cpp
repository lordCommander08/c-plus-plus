#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* convertll(vector<int> &arr) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* n = new Node(arr[i]);
        temp->next = n;
        temp = n;
    }
    return head;
}

Node* sortll(Node* head) {
    vector<int> arr;
    Node* temp = head;
    while (temp != NULL) {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    sort(arr.begin(), arr.end());
    int i = 0;
    temp = head;
    while (temp != NULL) {
        temp->data = arr[i++];
        temp = temp->next;
    }
    return head;
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* reverse(Node* head) {
    Node* prev = NULL;
    Node* curr = head;
    while (curr != NULL) {
        Node* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

// Helper function to recursively add 1
int helper(Node* head) {
    if (head == NULL) return 1; // carry = 1 at the end
    int carry = helper(head->next);
    head->data += carry;
    if (head->data < 10) return 0; // no carry
    head->data = 0;
    return 1; // still carry
}

Node* add1(Node* head) {
    if (head == NULL) return nullptr;

    int carry = helper(head);

    if (carry == 1) {
        Node* newnode = new Node(1);
        newnode->next = head;
        head = newnode;
    }
    return head;
}

int main() {
    vector<int> arr = {9,9,9};
    Node* head = convertll(arr);

    cout << "Original list: ";
    traverse(head);

    cout << "Sorting the SLL:" << endl;
    sortll(head);
    traverse(head);

    cout << "Adding 1 to the linked list:" << endl;
    head = add1(head);
    traverse(head);

    return 0;
}