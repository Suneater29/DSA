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
Node* segregate(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* evenhead=new Node(-1);
    Node* eventail=evenhead;
    Node* oddhead=new Node(-1);
    Node* oddtail=oddhead;
    Node* curr=head;
    while(curr!=nullptr){
        Node* temp=curr;
        curr=curr->next;
        temp->next=nullptr;
        if((temp->data)%2==0){
            eventail->next=temp;
            eventail=temp;
        }
        else{
            oddtail->next=temp;
            oddtail=temp;
        }
    }
    eventail->next=oddhead->next;
    return evenhead->next;
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
    segregate(head);
    return 0; 
}