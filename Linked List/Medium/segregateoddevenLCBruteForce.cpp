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
    vector<int>arr;
    Node* temp=head;
    while(temp!=nullptr || temp->next!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp) arr.push_back(temp->data);
    temp=head->next;
    while(temp!=nullptr || temp->next!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next->next;
    }
    if(temp) arr.push_back(temp->data);
    temp=head;
    int i=0;
    while(temp!=nullptr){
        temp->data=arr[i];
        i++;
        temp=temp->next;
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
    segregate(head);
    return 0; 
}