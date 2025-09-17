#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

// Delete first occurrence of key in DLL
Node* deletekey(Node* head, int key) {
    Node* temp = head;

    while (temp != NULL) {
    //     if (temp->data == key) {
    //         // Case 1: delete head
    //         if (temp == head) {
    //             head = head->next;
    //             if (head != NULL) head->back = NULL;
    //             delete temp;
    //             return head;
    //         }
    //         // Case 2: delete tail
    //         else if (temp->next == NULL) {
    //             temp->back->next = NULL;
    //             delete temp;
    //             return head;
    //         }
    //         // Case 3: delete middle node
    //         else {
    //             temp->back->next = temp->next;
    //             temp->next->back = temp->back;
    //             delete temp;
    //             return head;
    //         }
    //     }
    //     temp = temp->next;
    // }
    if(temp->data==key){
        if(temp==head) head=head->next;
        Node* prevnode=temp->back;
        Node* nextnode=temp->next;
        if(nextnode!=NULL) nextnode->back=prevnode;
        if(prevnode!=NULL) prevnode->next=nextnode;
        free(temp);
        temp=nextnode;
    }
    else{
        temp=temp->next;
    }
    }
    return head; // if key not found
}

void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* convertDll(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

// Reverse DLL properly
Node* reversedll(Node* head) {
    if (head == NULL || head->next == NULL) return head;

    Node* curr = head;
    Node* last = NULL;

    while (curr != NULL) {
        last = curr;
        // swap next and back
        Node* nxt = curr->next;
        curr->next = curr->back;
        curr->back = nxt;
        curr = nxt;
    }

    return last; // new head
}

int main() {
    vector<int> arr = {10, 20, 10, 40, 50, 40, 10};
    Node* head = convertDll(arr);
    Node* temp=head;

    traverse(temp);

    cout << "Reverse DLL:" << endl;
    head = reversedll(temp);
    traverse(head);
    temp=head;
    cout << "Delete a key in DLL (10):" << endl;
    head = deletekey(head, 10);
    traverse(head);

    return 0;
}