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
Node* sortnode(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    int cnt0=0;
    int cnt1=0;
    int cnt2=0;
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->data==0){
            cnt0++;
        }
        else if(temp->data==1){
            cnt1++;
        }
        else{
            cnt2++;
        }
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        if(cnt0){
            temp->data=0;
            cnt0--;
        }
        else if(cnt1){
            temp->data=1;
            cnt1--;
        }
        else{
            temp->data=2;
            cnt2--;
        }
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
    sortnode(head);
    return 0; 
}