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
Node* arrtoLL(vector<int>&arr){
    for(int i=0;i<arr.size();i++){
    }

}
Node* sorting(Node* head){
    vector<int>arr;
    Node* temp=head;
    while(temp!=nullptr){
        arr.push_back(temp->data);
        temp=temp->next;
    }
    sort(arr.begin(),arr.end());
    return arrtoLL(arr);
}
int main(){
    vector<int>arr={2,5,8,7};
    Node* y= new Node(arr[0],nullptr);
    cout<<y;
    return 0; 
}