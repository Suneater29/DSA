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
bool isParentSum(Node *root){
    if(root==nullptr || (root->left==nullptr) && (root->right==nullptr)){
        return true;
    }
    int sum=0;
    if(root->left!=nullptr){
        sum+=root->left->data;
    }
    if(root->right!=nullptr){
        sum+=root->right->data;
    }
    if(root->data!=sum) return false;
    return (isParentSum(root->left) && isParentSum(root->right)); 
}
int main(){
    cout<<"height";
    return 0; 
}