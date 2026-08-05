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
bool isleaf(Node* root){
    return !root->left && !root->right;
}
void leftTraversal(Node* root,vector<int> &ans){
    Node* node=root->left;
    while(node){
        if(!isleaf(node)) ans.push_back(node->data);
        if(node->left!=nullptr) node=node->left;
        else node=node->right;
    }
}
void leafTraversal(Node* root,vector<int> &ans){
    if(isleaf(root)) ans.push_back(root->data);
    if(root->left!=nullptr) leafTraversal(root->left,ans);
    if(root->right!=nullptr) leafTraversal(root->right,ans);
}
void rightTraversal(Node* root,vector<int> &ans){
    Node* node=root->right;
    vector<int>temp;
    while(node){
        if(!isleaf(node)) temp.push_back(node->data);
        if(node->right!=nullptr) node=node->right;
        else node=node->left;
    }
    for(int i=temp.size()-1;i>=0;i--){
        ans.push_back(temp[i]);
    }
}
vector<int> boundaryTraversal(Node *root) {
    vector<int>ans;
    if(root==nullptr) return ans;
    if(!isleaf(root)) ans.push_back(root->data);
    leftTraversal(root,ans);
    leafTraversal(root,ans);
    rightTraversal(root,ans);
    return ans;
}
int main(){
    cout<<"height";
    return 0;
}