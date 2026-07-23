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
void makepre(Node* root  ,vector<int> &preorder){
    if(root==nullptr) return;
    preorder.push_back(root->data);
    makepre(root->left,preorder);
    makepre(root->right,preorder);
}
vector<int>traversal(Node* root){
    vector<int>preorder;
    makepre(root,preorder);
    return preorder;
}
int main(){
    cout<<"traversal";
    return 0;
}