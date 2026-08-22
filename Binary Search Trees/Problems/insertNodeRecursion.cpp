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
Node* insert(Node* root, int key) {
    if(root==nullptr) return new Node(key);
    if(root->data<key) root->right=insert(root->right,key);
    if(root->data>key) root->left=insert(root->left,key);
    return root;
}
int main(){
    cout<<"insert give node in BST using recursion";
    return 0;
}