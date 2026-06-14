#include<bits/stdc++.h>
using namespace std;
struct Node {
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = nullptr;
    }
};
Node* reverselist(Node* head) {
    Node* curr = head;
    Node* prev = nullptr;
    while (curr != nullptr) {
        Node* front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    return prev;
}
Node* middleNode(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
int pairSum(Node* head) {
    Node* middle = middleNode(head);
    Node* slow = head;
    Node* revhead = reverselist(middle);
    int ans = 0;
    while (revhead != nullptr) {
        ans = max(ans, slow->val + revhead->val);
        slow = slow->next;
        revhead = revhead->next;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int x;
    cin >> x;
    Node* head = new Node(x);
    Node* tail = head;
    for (int i = 1; i < n; i++) {
        cin >> x;
        tail->next = new Node(x);
        tail = tail->next;
    }
    cout <<pairSum(head) << endl;
    return 0;
}