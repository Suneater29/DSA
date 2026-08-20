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
Node* binaryTree(vector<int> &preorder,vector<int> &inorder,int prestart,int instart,int preend,int inend,map<int,int> &mpp){
        if(prestart>preend || instart>inend) return nullptr;
        Node* root=new Node(preorder[prestart]);
        int rootind=mpp[root->data];
        int remaining=rootind-instart;
        root->left=binaryTree(preorder,inorder,prestart+1,instart,prestart+remaining,rootind-1,mpp);
        root->right=binaryTree(preorder,inorder,prestart+remaining+1,rootind+1,preend,inend,mpp);
        return root;
    }
Node* buildBinaryTree(vector<int> &inorder, vector<int> &preorder)
{
	int n=preorder.size();
    int m=inorder.size();
    map<int,int>mpp;
    for(int i=0;i<m;i++){
        mpp[inorder[i]]=i;
    }
    return binaryTree(preorder,inorder,0,0,n-1,m-1,mpp);
}
int main(){
    cout<<"binary tree from preorder and inorder traversal";
    return 0; 
}