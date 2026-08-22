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
int mini(Node* root){
    if(root==nullptr) return -1;
    while(root!=nullptr){
        root=root->left;
    }
    return root->data;
}
int maxi(Node* root){
    if(root==nullptr) return -1;
    while(root!=nullptr){
        root=root->right;
    }
    return root->data;
}
int main(){
    cout<<"maximum and minimum in BST";
    return 0;
}