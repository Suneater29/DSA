//we have to find the starting point of the loop (if exist) in linked list
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
int findlength(Node* slow,Node* fast){
    int cnt=1;
    fast=fast->next;
    while(slow!=fast){
        fast=fast->next;
        cnt++;
    }
    return cnt;
}
int length(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!= nullptr && fast->next!=nullptr){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            return findlength(slow,fast);
        }
    }
    return 0;
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y;
    return 0; 
}