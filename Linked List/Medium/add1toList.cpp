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
Node* addone(Node* head){
    Node* revhead=reversal(head);
    Node* temp=revhead;
    int carry=1;
    while(temp!=nullptr && carry){
        int sum=carry+temp->data;
        temp->data=sum%10;
        carry=sum/10;
        if(temp->next==nullptr && carry){
            Node* newnode=new Node(carry);
            temp->next=newnode;
            carry=0;
        }
        temp=temp->next;
    }
    Node* newhead=reversal(revhead);
    return newhead;
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
    addone(head);
    return 0; 
}