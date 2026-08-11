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
int maximumWidth(Node* root){
    if(root==nullptr) return 0;
    int maxwidth=0;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        int mini=q.front().second;
        int n=q.size();
        int first;
        int last;
        for(int i=0;i<n;i++){
            long long curri=q.front().second-mini;
            Node* node=q.front().first;
            q.pop();
            if(i==0) first=curri;
            if(i==n-1) last=curri;
            if(node->left!=nullptr) q.push({node->left,curri*2+1});
            if(node->right!=nullptr) q.push({node->right,curri*2+2});
        }
        maxwidth=max(maxwidth,last-first+1);
    }
    return maxwidth;
}
int main(){
    cout<<"height";
    return 0; 
}