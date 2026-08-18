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
int findleftH(Node* curr){
    int ans=0;
    while(curr!=nullptr){
        ans++;
        curr=curr->left;
    }
    return ans;
}
int findRightH(Node* curr){
    int ans=0;
    while(curr!=nullptr){
    ans++;
    curr=curr->right;
    }
    return ans;
}
int countNodes(Node* root) {
    if(root==nullptr) return 0; 
    int leftHeight=findleftH(root);
    int rightHeight=findRightH(root);
    if(leftHeight==rightHeight){
        return (1<<leftHeight)-1;
    }
    return 1+countNodes(root->left)+countNodes(root->right);
}
int main(){
    cout<<"total nodes in a complete binary tree";
    return 0; 
}