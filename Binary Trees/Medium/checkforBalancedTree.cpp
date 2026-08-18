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
    if(root==NULL) return 0;
    int leftHeight=findHeight(root->left);
    int rightHeight=findHeight(root->right);
    if(leftHeight==-1 || rightHeight==-1) return -1;
    if(abs(rightHeight-leftHeight)>1) return -1;
    return 1+max(leftHeight,rightHeight);
}
bool isBalancedBT(Node* root){
    int height=findHeight(root);
    if(height<0) return false;
    return true;
}
int main(){
    cout<<"check if tree is balanced or not";
    return 0;
}