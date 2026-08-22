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
    Node* curr=root;
    while(true){
        if(curr->data>key){
            if(curr->left!=nullptr){
                curr=curr->left;
            }
            else{
                curr->left=new Node(key);
                break;
            }
        }
        else{
            if(curr->right!=nullptr){
                curr=curr->right;
            }
            else{
                curr->right=new Node(key);
                break;
            }
        }
    }
    return root;
}
int main(){
    cout<<"insert give node in BST using iterative method";
    return 0;
}