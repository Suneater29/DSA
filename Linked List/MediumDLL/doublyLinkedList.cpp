#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};
Node* convertarr2DLL(vector<int>&arr,int n){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<n;i++){
        Node* temp=new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=prev->next;
    }
    return head;
}
void print(Node* head){ 
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next; 
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* head=convertarr2DLL(arr,n);
    print(head);
    return 0;
}