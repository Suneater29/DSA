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
//this one is the recursive approach 
Node* reverse(Node* head){
    if(head==nullptr || head->next==nullptr) return head;
    Node* temp=reverse(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=nullptr;
    return temp;
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
    cout<<reverse(head);
    return 0; 
}