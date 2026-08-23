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
Node* findLCA(Node* root, Node* n1, Node* n2) {
    if(root==nullptr) return nullptr;
    if(root==n1 || root==n2){
        return root;
    }
    Node* curr=root;
    if(curr->data>n1->data && curr->data>n2->data){
        return findLCA(root->left,n1,n2);
    }
    if(curr->data<n1->data && curr->data<n2->data){
        return findLCA(root->right,n1,n2);
    }
    return root;
}
int main(){
    cout<<"find the lowest common ancestor of given nodes";
    return 0;
}