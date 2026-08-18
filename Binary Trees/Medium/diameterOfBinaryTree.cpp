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
int findHeight(Node* root){
    if(root==nullptr) return 0;
    int leftHeight=findHeight(root->left);
    int rightHeight=findHeight(root->right);
    return 1+max(leftHeight,rightHeight);
}
int diameterOfBinaryTree(Node* root) {
    if(root==nullptr) return 0;
    int leftH=findHeight(root->left);
    int rightH=findHeight(root->right);
    int dia=leftH+rightH;
    int leftDia=diameterOfBinaryTree(root->left);
    int rightDia=diameterOfBinaryTree(root->right);
    return max(dia,max(leftDia,rightDia));
}
int main(){
    cout<<"diameter of binary tree Brute Force";
    return 0;
}