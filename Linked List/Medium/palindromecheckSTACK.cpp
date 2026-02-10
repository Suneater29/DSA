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
bool palindrome(Node* head){
    stack<Node*>st;
    Node* temp=head;
    while(temp!=nullptr){
        st.push(temp);
        temp=temp->next;
    }
    temp=head;
    while(temp!=nullptr){
        if(temp->data!=st.top()->data) return false;
        temp=temp->next;
        st.pop();
    }
    return true;
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y;
    return 0; 
}