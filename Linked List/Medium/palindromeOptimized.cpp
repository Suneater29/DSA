//we have to find the starting point of the loop (if exist) in linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
Node* reverselist(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* curr=head;
    Node* prev=nullptr;
    while(curr!=nullptr){
        Node* front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}
bool palindrome(Node* head){
    if(head==nullptr || head->next==nullptr) return true;
    Node* slow=head;
    Node* fast=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* newhead=reverselist(slow->next);
    Node* first=head;
    Node* second=newhead;
    while(second!=nullptr){
        if(first->data != second->data){
            reverselist(second);
            return false;
        }
        first=first->next;
        second=second->next;
    }
    reverselist(second);
    return true;
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y;
    return 0; 
}