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
Node* sumlist(Node* head1,Node* head2){
    Node* temp1=head1;
    Node* temp2=head2;
    Node* dummy=new Node(-1);
    Node* curr=dummy;
    int carry=0;
    while(temp1!=nullptr || temp2!=nullptr){
    int sum=carry;
    if(temp1) sum=sum+temp1->data;
    if(temp2) sum=sum+temp2->data;
    Node* newnode=new Node(sum%10);
    carry=sum/10;
    curr->next=newnode;
    curr=curr->next;
    if(temp1) temp1=temp1->next;
    if(temp2) temp2=temp2->next;
    }
    if(carry){
    Node* newnode=new Node(carry);
    curr->next=newnode;
    curr=curr->next;
    }
    Node* newhead=dummy->next;
    return newhead;
}
int main(){
    int n1;
    cin>>n1;
    if(n1==0) return 0;
    vector<int>arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    Node* head1= new Node(arr1[0]);
    Node* temp1=head1;
    for(int i = 1; i < n1; i++){
        temp1->next = new Node(arr1[i]);
        temp1 = temp1->next;
    }
    int n2;
    cin>>n2;
    if(n1==0) return 0;
    vector<int>arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    Node* head2= new Node(arr2[0]);
    Node* temp2=head2;
    for(int i = 1; i < n2; i++){
        temp2->next = new Node(arr2[i]);
        temp2 = temp2->next;
    }
    sumlist(head1,head2);
    return 0; 
}