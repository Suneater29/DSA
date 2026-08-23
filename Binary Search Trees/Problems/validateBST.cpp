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
bool isvalid(Node* root,long long minval,long long maxval){
    if(root==nullptr) return true;
    if(root->data>=maxval || root->data<=minval) return false;
    return isvalid(root->left,minval,root->data) && isvalid(root->right,root->data,maxval);
}
bool isBST(Node* root) {
	long long minval=LLONG_MIN;
    long long maxval=LLONG_MAX;
    return isvalid(root,minval,maxval);
}
int main(){
    cout<<"delete given node from BST";
    return 0;
}