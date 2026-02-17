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
Node* intersect(Node* head1,Node* head2){
    unordered_map<Node*,int>mpp;        //using hashing to store node 
    Node* temp=head1;
    while(temp!=nullptr){
        mpp[temp]=1;
        temp=temp->next;
    }
    temp=head2;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            return temp;
        }
        temp=temp->next;
    }
    return nullptr;
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