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
Node* searchBST(Node* root,int val){
    while(root!=nullptr && root->data!=val){
        if(root->data>val) root=root->left;
        else root=root->right;
    }
    return root;
}
bool search(Node* root, int key) {
    while(root!=nullptr){
        if(root->data==key) return true;
        if(root->data>key) root=root->left;
        else root=root->right;
    }
    return false;
}
int main(){
    cout<<"search for a given node from BST when node->val is given";
    return 0;
}