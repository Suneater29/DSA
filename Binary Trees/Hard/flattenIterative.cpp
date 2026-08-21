#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val){
        data=val;
        left=right=nullptr;
    }
};
void flattenBinaryTree(Node* root){
    if(root==nullptr) return;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        Node* curr=st.top();
        st.pop();
        if(curr->right) st.push(curr->right);
        if(curr->left) st.push(curr->left);
        if(!st.empty()) curr->right=st.top();
        curr->left=nullptr;
    }
}
int main(){
    cout<<"Flatten the binary tree into a linked list using stack";
    return 0; 
}