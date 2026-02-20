#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};
Node* mergesorted(Node* left,Node* right){
    Node* dummy=new Node(-1);
    Node* tail=dummy;
    while(left!=nullptr && right!=nullptr){
        if(left->data < right->data){
            tail->next=left;
            left=left->next;
        }
        else{
            tail->next=right;
            right=right->next;
        }
        tail=tail->next;
    }
    if(left!=nullptr) tail->next=left;
    else tail->next=right;
    return dummy->next;
}
Node* findmiddle(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=nullptr || fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
Node* sortlist(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* middle=findmiddle(head);
    Node* right=middle->next;
    middle->next=nullptr;
    Node* left=head;
    left=sortlist(left);
    right=sortlist(right);
    return mergesorted(left,right);
}
int main(){
    int n;
    cin>>n;
    if(n==0) return 0;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head= new Node(arr[0]);
    Node* temp=head;
    for(int i = 1; i < n; i++){
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    cout<<sortlist(head);
    return 0; 
}
