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
vector<vector<int>> verticalTraversal(Node* root) {
    map<int,map<int,multiset<int>>>nodes;
    queue<pair<Node*,pair<int,int>>>q;
    q.push({root,{0,0}});
    while(!q.empty()){
        auto p=q.front();
        q.pop();
        Node* node=p.first;
        int vertical=p.second.first;
        int level=p.second.second;
        nodes[vertical][level].insert(node->data);
        if(node->left!=nullptr) q.push({node->left,{vertical-1,level+1}});
        if(node->right!=nullptr) q.push({node->right,{vertical+1,level+1}});
    }
    vector<vector<int>>traversal;
    for(auto i:nodes){
        vector<int>col;
        for(auto j:i.second){
            col.insert(col.end(),j.second.begin(),j.second.end());
        }
        traversal.push_back(col);
    }
    return traversal;
}

int main(){
    cout<<"travesal vertically";
    return 0;
}