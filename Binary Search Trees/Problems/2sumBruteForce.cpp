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
void findin(Node*root,vector<int> &inorder){
    if(root==nullptr) return;
    findin(root->left,inorder);
    inorder.push_back(root->data);
    findin(root->right,inorder);
}

bool findTarget(Node*root, int k) {
    vector<int>inorder;
    findin(root,inorder);
    int low=0;
    int high=inorder.size()-1;
    while(low<high){
        int sum=inorder[low]+inorder[high];
        if(sum>k) high--;
        else if(sum<k) low++;
        else return true;
    }
    return false;
}
int main(){
    cout<<"construct BST from preorder traversal";
    return 0;
}