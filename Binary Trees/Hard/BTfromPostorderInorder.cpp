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
Node* tree(vector<int> &postorder,vector<int> &inorder,int poststart,int postend,int instart,int inend,map<int,int> &mpp){
     if(poststart>postend || instart>inend) return nullptr;
     Node* root=new Node(postorder[postend]);
     int rootind=mpp[root->data];
     int remaining=rootind-instart;
     root->left=tree(postorder,inorder,poststart,poststart+remaining-1,instart,rootind-1,mpp);
     root->right=tree(postorder,inorder,poststart+remaining,postend-1,rootind+1,inend,mpp);
     return root;
}
Node* getTreeFromPostorderAndInorder(vector<int>& postOrder, vector<int>& inOrder){
	int n=postOrder.size();
    int m=inOrder.size();
    map<int,int>mpp;
    for(int i=0;i<m;i++){
        mpp[inOrder[i]]=i;
    }
    return tree(postOrder,inOrder,0,n-1,0,m-1,mpp);
}
int main(){
    cout<<"binary tree from postorder and inorder traversal";
    return 0; 
}