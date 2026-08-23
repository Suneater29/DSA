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
Node* findlastright(Node* root){
    if(root->right==nullptr){
        return root;
    }
    return findlastright(root->right);
}
Node* connect(Node* root){
    if(root->left==nullptr) return root->right;
    else if(root->right==nullptr) return root->left;
    Node* rightchild=root->right;
    Node* lastright=findlastright(root->left);
    lastright->right=rightchild;
    return root->left;
}
Node* deleteNode(Node* root, int key) {
    if(root==nullptr) return nullptr;
    if(root->data==key) return connect(root);
    Node* curr=root;
    while(curr!=nullptr){
        if(curr->data>key){
            if(curr->left!=nullptr && curr->left->data==key){
                curr->left=connect(curr->left);
                break;
            }
            else{
                curr=curr->left;
            }
        }
        else{
            if(curr->right!=nullptr && curr->right->data==key){
                curr->right=connect(curr->right);
                break;
            }
            else{
                curr=curr->right;
            }
        }
    }
    return root;
}
int main(){
    cout<<"delete given node from BST";
    return 0;
}