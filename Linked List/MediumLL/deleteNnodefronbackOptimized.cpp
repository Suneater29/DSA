//we will use slow and fast pointers in this solution , but move each only one step
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
Node* deletenode(Node* head,int pos){
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<pos;i++){
        if(fast==nullptr) return head;
        fast=fast->next;
    }
    if(fast==nullptr){
        Node* newhead=head->next;
        delete head;
        return newhead;
    }
    while(fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next;
    }
    Node* front=slow->next;
    slow->next=front->next;
    delete slow;
    return head;
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
    int pos;
    cin>>pos;
    deletenode(head,pos);
    return 0; 
}