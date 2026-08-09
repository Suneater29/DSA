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
void path(Node* root,vector<int> &curr,vector<vector<int>> &ans){
    if(root==nullptr) return;
    curr.push_back(root->data);
    if(root->left==nullptr && root->right==nullptr){
        ans.push_back(curr);
    }
    path(root->left,curr,ans);
    path(root->right,curr,ans);
    curr.pop_back();
}
vector<vector<int>> paths(Node* root) {
    vector<vector<int>>ans;
    vector<int>currpath;
    if(root==nullptr) return ans;
    path(root,currpath,ans);
    return ans;
}
int main(){
    cout<<"height";
    return 0;
}