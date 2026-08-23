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
void inorder(Node* root,int &k,int &cnt,int &ans){
    if(root==nullptr) return;
    inorder(root->left,k,cnt,ans);
    cnt++;
    if(cnt==k) ans=root->data;
    inorder(root->right,k,cnt,ans);
}
int kthSmallest(Node* root, int k)
{
    int cnt=0;
    int ans;
    inorder(root,k,cnt,ans);
    return ans;
}
int main(){
    cout<<"find the kth smallest node in BST";
    return 0;
}