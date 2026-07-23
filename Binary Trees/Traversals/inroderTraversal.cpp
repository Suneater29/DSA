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
vector<int>traversal(Node* root){
    vector<int>inorder;
    makein(root,inorder);
    return inorder;
}
int main(){
    cout<<"traversal";
    return 0;
}