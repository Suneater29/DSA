#include<bits/stdc++.h>
using namespace std;
class Node {
   public:
 		int data;
 		Node *next;
  		Node *child;
 		Node() : data(0), next(nullptr), child(nullptr){};
 		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
};
Node* merge(Node* head,Node* mergehead){
    Node* t1=head;
    Node* t2=mergehead;
    Node* dummy=new Node(-1);
    Node* tail=dummy;
    t1->next=nullptr;
    t2->next=nullptr;
    while(t1!=nullptr && t2!=nullptr){
        if(t1->data < t2->data){
            tail->child=t2;
            tail=t2;
            t2=t2->child;
        }
        else{
            tail->child=t1;
            tail=t1;
            t1=t1->child;
        }
        tail->next=nullptr;
    }
    if(t1!=nullptr) tail->child=t1;
    else tail->child=t2;
    return dummy->child;
}
Node* flattenLinkedList(Node* head) 
{
    if(head==nullptr || head->next==nullptr) return head;
    Node* mergehead=flattenLinkedList(head->next);
    head=merge(head,mergehead);
    head->next=nullptr;
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
    flattenLinkedList(head);
    return 0; 
}