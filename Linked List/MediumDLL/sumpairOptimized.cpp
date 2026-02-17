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
Node* findtail(Node* head){
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    return tail;
}
// the given list will be sorted 
vector<pair<int,int>> sumpair(Node* head,int sum){
    Node* left=head;
        Node* right=findtail(head);
        vector<pair<int, int>>ans;
        while(left->data < right->data){
            if(left->data+right->data==sum){
                ans.push_back({left->data,right->data});
                left=left->next;
                right=right->prev;
            }
            else if(left->data+right->data < sum){
                left=left->next;
            }
            else{
                right=right->prev;
            }
        }
        return ans;
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
    int sum;
    cin>>sum;
    sumpair(head,sum);
    return 0;
}