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
void parents(Node* root,unordered_map<Node*,Node*> &mpp,int start,Node* &target){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node->data==start) target=node;
        if(node->left!=nullptr){
            mpp[node->left]=node;
            q.push(node->left);
        }
        if(node->right!=nullptr){
            mpp[node->right]=node;
            q.push(node->right);
        }
    }
}
int timeToBurnTree(Node* root, int start){
    unordered_map<Node*,Node*>mpp;
    Node* target=nullptr;
    parents(root,mpp,start,target);
    int time=-1;
    queue<Node*>q;
    q.push(target);
    unordered_map<Node*,bool>visited;
    visited[target]=true;
    while(!q.empty()){
        int n=q.size();
        time++;
        for(int i=0;i<n;i++){
            Node* node=q.front();
            q.pop();
            if(node->left!=nullptr && !visited[node->left]){
                q.push(node->left);
                visited[node->left]=true;
            }
            if(node->right!=nullptr && !visited[node->right]){
                q.push(node->right);
                visited[node->right]=true;
            }
            if(mpp.find(node)!=mpp.end() && !visited[mpp[node]]){
                q.push(mpp[node]);
                visited[mpp[node]]=true;
            }
        }
    }
    return time;
}
int main(){
    cout<<"minimum time to burn tree from give node";
    return 0; 
}