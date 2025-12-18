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
int middle(Node* head){
    Node* temp=head;
    int cnt=0;
    while(temp->next!=nullptr){
        cnt++;
        temp=temp->next;
    }
    temp=head;
    int mid=(cnt/2)+1;
    while(temp->next!=nullptr){
        mid=mid-1;
        if(mid==0){
            break;
        }
        temp=temp->next;
    }
    return temp->data;
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
    cout<<middle(head);
    return 0; 
}