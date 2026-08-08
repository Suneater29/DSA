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
    vector<int>ans;
    if(root==nullptr) return ans;
    map<int,int>mpp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int vertical=it.second;
        if(mpp.find(vertical)==mpp.end()){
            mpp[vertical]=node->data;
        }
        if(node->left!=nullptr) q.push({node->left,vertical-1});
        if(node->right!=nullptr) q.push({node->right,vertical+1});
    }
    for(auto it:mpp){
        ans.push_back(it.second);
    }
    return ans;
}
int main(){
    cout<<"height";
    return 0;
}