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
vector<vector<int>> zigzagLevelOrder(Node* root) {
    vector<vector<int>>ans;
    if(root==nullptr) return ans;
    bool flip=true;
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        int qsize=q.size();
        vector<int>level(qsize);
        for(int i=0;i<qsize;i++){
            Node* node=q.front();
            q.pop();
            int index;
            if(flip){
                index=i;
            }
            else{
                index=qsize-1-i;
            }
            level[index]=node->data;
            if(node->left!=nullptr) q.push(node->left);
            if(node->right!=nullptr) q.push(node->right);
        }
        flip=!flip;
        ans.push_back(level);
    }
    return ans;
}
int main(){
    cout<<"zig zag travesal";
    return 0;
}