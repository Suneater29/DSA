//we will use slow and fast pointers in this solution , but move each only one step
//This method uses no reversal but simple mathematica
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
Node* deletenode(Node* head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node* slow=head;
    Node* fast=head;
    Node* prev=nullptr;
    while(fast!=nullptr && fast->next!=nullptr){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
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
    deletenode(head);
    return 0; 
}