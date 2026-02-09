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
Node* middle(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int main(){
    int n;
    cin>>n;
    if(n0) return 0;
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
    Node* mid=middle(head);
    if(mid!=nullptr){
        cout<<mid->data;
    }
    return 0; 
}
