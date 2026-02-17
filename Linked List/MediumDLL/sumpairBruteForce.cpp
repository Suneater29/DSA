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
// The given list will be sorted 
vector<pair<int,int>> sumpair(Node* head,int sum){
    Node* temp1=head;
    vector<pair<int,int>>ans;
    while(temp1!=nullptr){
        Node* temp2=temp1->next;
        while(temp2!=nullptr && temp1->data+temp2->data<=sum){
            if(temp1->data+temp2->data==sum){
                ans.push_back({temp1->data,temp2->data});
            }
            temp2=temp2->next;
        }
        temp1=temp1->next;
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