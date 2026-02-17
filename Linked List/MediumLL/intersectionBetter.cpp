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
Node* collision(Node* temp1,Node* temp2,int d){
    while(d){
        d--;
        temp2=temp2->next;
    }
    while(temp1!=temp2){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1;
}
Node* intersect(Node* head1,Node* head2){
    Node* temp1=head1;
    int n1=0;
    while(temp1!=nullptr){
        n1++;
        temp1=temp1->next;
    }
    Node* temp2=head2;
    int n2=0;
    while(temp2!=nullptr){
        n2++;
        temp2=temp2->next;
    }
    if(n1>n2){
        return collision(head2,head1,n1-n2);
    }
    else{
        return collision(head1,head2,n2-n1);
    }
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
    intersect(head1,head2);
    return 0; 
}