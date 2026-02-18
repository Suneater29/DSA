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
Node* rotateleft(Node* head, int k) {
        if(head==nullptr || head->next==nullptr) return head;
        Node* tail=head;
        Node* temp=head;
        int len=1;
        while(tail->next!=nullptr){
            len++;
            tail=tail->next;
        }
        k=k%len;
        if(k==0) return head;
        while(k>1){
            k--;
            temp=temp->next;
        }
        Node* newhead=temp->next;
        tail->next=head;
        temp->next=nullptr;
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
    int k;
    cin>>k;
    rotateleft(head,k);
    return 0; 
}