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
void flatten(Node* root,Node* &prev){
    if(root==nullptr) return;
    flatten(root->right,prev);
    flatten(root->left,prev);
    root->right=prev;
    root->left=nullptr;
    prev=root;
}
void flattenBinaryTree(Node* root){
    Node* prev=nullptr;
    flatten(root,prev);
}
int main(){
    cout<<"Flatten the binary tree into a linked list using recursion";
    return 0; 
}