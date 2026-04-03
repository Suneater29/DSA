#include<bits/stdc++.h>
using namespace std;
class Node {

public:
    int data;
    Node* next;
    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node* next) : data(x), next(next) {}
};
struct Queue {
  Node* front;
  Node* rear;
  void push(int);
  int pop();
  
  Queue() {
      front = rear = NULL;
  }
};

void Queue::push(int x) {
    Node* newnode = new Node(x);
    if (rear == nullptr) {
        front = rear = newnode;
    } else {
        rear->next = newnode;
        rear = newnode;
    }
}

int Queue::pop() {
    if (front == nullptr) return -1;
    Node* temp = front;
    front = front->next;
    if (front == nullptr) {
        rear = nullptr;
    }
    int value = temp->data;
    delete temp;
    return value;
}

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    cout << q.pop() << "\n";
    cout << q.pop() << "\n";
    cout << q.pop() << "\n"; // -1, empty queue
    return 0;
}