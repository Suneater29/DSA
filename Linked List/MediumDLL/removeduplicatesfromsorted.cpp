#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node* delduplicate(Node* head){
    Node* t1=head;
        while(t1->next!=nullptr){
            Node* t2=t1->next;
            if(t1->data == t2->data){
                Node* nextnode=t2->next;
                t1->next=nextnode;
                if(nextnode!=nullptr){
                    nextnode->prev=t1;
                }
                delete t2;
            }
            else{
                t1=t1->next;
            }
        }
        return head; 
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=prev->next;
    }
    delduplicate(head);
    return 0;
}