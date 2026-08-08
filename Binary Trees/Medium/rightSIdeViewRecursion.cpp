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
void rightDFS(Node* root,int level,vector<int> &ans){
    if(root==nullptr) return;
    if(ans.size()==level){
        ans.push_back(root->data);
    }
    rightDFS(root->right,level+1,ans);
    rightDFS(root->left,level+1,ans);
}
vector<int> rightSideView(Node* root) {
    vector<int>rightView;
    rightDFS(root,0,rightView);
    return rightView;
}

int main(){
    cout<<"height";
    return 0;
}