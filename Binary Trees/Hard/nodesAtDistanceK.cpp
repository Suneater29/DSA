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
void parents(Node* root,unordered_map<Node*,Node*> &parentPointer){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* currnode=q.front();
        q.pop();
        if(currnode->left!=nullptr){
            parentPointer[currnode->left]=currnode;
            q.push(currnode->left);
        }
        if(currnode->right!=nullptr){
            parentPointer[currnode->right]=currnode;
            q.push(currnode->right);
        }
    }
}
vector<int> distanceK(Node* root, Node* target, int k) {
    unordered_map<Node*,Node*>parentPointer;
    parents(root,parentPointer);
    queue<Node*>q;
    q.push(target);
    unordered_map<Node*,bool>visited;
    visited[target]=true;
    int dist=0;
    while(!q.empty()){
        int n=q.size();
        if(dist==k) break;
        dist++;
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
            if(parentPointer[node] && !visited[parentPointer[node]]){
                q.push(parentPointer[node]);
                visited[parentPointer[node]]=true;
            }
        }
    }
    vector<int>ans;
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        ans.push_back(node->data);
    }
    return ans;
}

//if data value of target is given and return answer in sorted manner : 
void markParent(Node* root,unordered_map<Node*,Node* > &mpp,int target,Node* &targetNode){
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node->data==target){
            targetNode=node;
        }
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
vector<int> kDistanceNodes(Node* root, int target, int k) {
    unordered_map<Node* ,Node*>mpp;
    Node* targetNode=nullptr;
    markParent(root,mpp,target,targetNode);
    unordered_map<Node*,bool>visited;
    visited[targetNode]=true;
    queue<Node*>q;
    q.push(targetNode);
    int dist=0;
    while(!q.empty()){
        int n=q.size();
        if(dist==k) break;
        dist++;
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
    vector<int>ans;
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        ans.push_back(curr->data);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    cout<<"nodes at distance k ";
    return 0; 
}