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
    Node* curr=root;
    while(curr!=nullptr){
        Node* prev=nullptr;
        if(curr->left!=nullptr){
            prev=curr->left;
            while(prev->right!=nullptr){
                prev=prev->right;
            }
            prev->right=curr->right;
            curr->right=curr->left;
            curr->left=nullptr;
        }
        curr=curr->right;
    }
}
int main(){
    cout<<"Flatten the binary tree into a linked list using Morris Traversal";
    return 0; 
}