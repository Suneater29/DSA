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
vector<int> levelOrder(Node* root) {
    vector<vector<int>>ans;
    if(root==nullptr) return {};
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        vector<int>level;
        int qsize=q.size();
        for(int i=0;i<qsize;i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=nullptr) q.push(node->left);
            if(node->right !=nullptr) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    vector<int>leftView;
    for(auto it:ans){
        leftView.push_back(it.front());
    }
    return leftView;
}
int main(){
    cout<<"view from left side";
    return 0;
}