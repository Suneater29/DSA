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
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;
    Node* onehead=new Node(-1);
    Node* onetail=onehead;
    Node* twohead=new Node(-1);
    Node* twotail=twohead;
    Node* curr=head;
    while(curr!=NULL){
        if(curr->data==0){
            zerotail->next=curr;
            zerotail=curr;
        }
        else if(curr->data==1){
            onetail->next=curr;
            onetail=curr;
        }
        else{
            twotail->next=curr;
            twotail=curr;
        }
        curr=curr->next;
    }
    zerotail->next=onehead->next?onehead->next:twohead->next;
    onetail->next=twohead->next;
    twotail->next=nullptr; 
    Node* newhead=zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
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
    sortnode(head);
    return 0; 
}