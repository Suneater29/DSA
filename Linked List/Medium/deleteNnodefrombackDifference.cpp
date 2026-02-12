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
Node* deletenode(Node* head,int pos){
    if(head==nullptr || head->next==nullptr) return nullptr;
    int cnt=1;
    Node* curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
        cnt++;
    }
    if(cnt==pos){
        Node* newhead=head->next;
        delete head;
        return newhead;
    }
    int timer=cnt-pos;
    curr=head;
    while(curr!=nullptr){
        timer--;
        if(timer==0){
            Node* front=curr->next;
            curr->next=front->next;
            delete front;
        }
        curr=curr->next;
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
    int pos;
    cin>>pos;
    deletenode(head,pos);
    return 0; 
}