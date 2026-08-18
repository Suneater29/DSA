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
void makein(Node* root  ,vector<int> &inorder){
    if(root==nullptr) return;
    makein(root->left,inorder);
    inorder.push_back(root->data);
    makein(root->right,inorder);
}
void makepre(Node* root  ,vector<int> &preorder){
    if(root==nullptr) return;
    preorder.push_back(root->data);
    makepre(root->left,preorder);
    makepre(root->right,preorder);
}
void makepost(Node* root  ,vector<int> &postorder){
    if(root==nullptr) return;
    makepost(root->left,postorder);
    makepost(root->right,postorder);
    postorder.push_back(root->data);
}
vector<vector<int>>traversal(Node* root){
    vector<int>inorder;
    vector<int>preorder;
    vector<int>postorder;
    makein(root,inorder);
    makepre(root,preorder);
    makepost(root,postorder);
    return{inorder,preorder,postorder};
}
int main(){
    cout<<"all travesal in one go recursion";
    return 0;
}