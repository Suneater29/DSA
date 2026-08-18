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
void leftDFS(Node* root,int level,vector<int> &ans){
    if(root==nullptr) return;
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    leftDFS(root->left,level+1,ans);
    leftDFS(root->right,level+1,ans);
}
vector<int> leftSideView(Node* root) {
    vector<int>leftView;
    leftDFS(root,0,leftView);
    return leftView;
}
int main(){
    cout<<"left side view using recursion";
    return 0;
}