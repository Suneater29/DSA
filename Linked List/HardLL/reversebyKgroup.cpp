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
Node* findknode(Node* head,int k){
    Node* temp=head;
    while(temp!=nullptr && k>1){
        k--;
        temp=temp->next;
    }
    return temp;
}
Node* reversal(Node* head){
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
Node* reversek(Node* head, int k) {
    Node* temp=head;
    Node* prevnode=nullptr;
    while(temp!=nullptr){
        Node* knode=findknode(temp,k);
        if(knode==nullptr){
            if(prevnode!=nullptr) prevnode->next=temp;
            break;
        }
        Node* nextnode=knode->next;
        knode->next=nullptr;
        reversal(temp);
        if(temp==head){
            head=knode;
        }
        else{
            prevnode->next=knode;
        }
        prevnode=temp;
        temp=nextnode;
    }
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
    int k;
    cin>>k;
    reversek(head,k);
    return 0; 
}