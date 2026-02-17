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
int length(Node* head){
    unordered_map<Node*,int>mpp;
    int timer=1;
    Node* temp=head;
    while(temp!=nullptr){
        if(mpp.find(temp)!=mpp.end()){
            int value=mpp[temp];
            return (timer-value);
        }
        mpp[temp]=timer;
        timer++;
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y;
    return 0; 
}