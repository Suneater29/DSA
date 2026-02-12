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
Node* reversal(Node* head){
    if(head==nullptr || head->next==nullptr) return nullptr;
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
Node* deletenode(Node* head,int pos){
    if(head==nullptr || head->next==nullptr) return head;
    Node* revhead=reversal(head);
    int cnt=1;
    Node* curr=revhead;
    while(curr!=nullptr){
        if(cnt==pos){
            Node* temp=curr->next;
            curr->data=temp->data;
            curr->next=temp->next;
            delete temp;
        }
        curr=curr->next;
        cnt++;
    }
    Node* res=reversal(revhead);
    return res;
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