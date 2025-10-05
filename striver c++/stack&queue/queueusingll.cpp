#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

class Queue {
    Node* front;
    Node* rear;
    int count;   // number of elements

public:
    Queue() {
        front = rear = NULL;
        count = 0;
    }

    void enqueue(int x) {
        Node* newNode = new Node(x);
        if (rear == NULL) { // first element
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        count++;
        cout << x << " enqueued.\n";
    }

    void dequeue() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == NULL) rear = NULL; // queue became empty
        cout << "Dequeued element = " << temp->data << "\n";
        delete temp;
        count--;
    }

    int peek() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    int getSize() {
        return count;
    }

    void print() {
        if (front == NULL) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue elements: ";
        Node* temp = front;
        while (temp != NULL) {
            cout << temp->data;
            if (temp->next != NULL) cout << ",";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.print();
    cout << "Front element = " << q.peek() << "\n";
    cout << "Size = " << q.getSize() << "\n";

    q.dequeue();
    q.dequeue();
    q.dequeue();

    q.print();
    cout << "Size = " << q.getSize() << "\n";

    return 0;
}