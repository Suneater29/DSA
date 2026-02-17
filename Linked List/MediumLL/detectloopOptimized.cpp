#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
};
bool loop(Node* head){
    Node* fast=head;
    Node* slow=head;
    fast=fast->next->next;
    slow=slow->next;
    if(fast==nullptr || fast->next==nullptr){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y;
    return 0; 
}