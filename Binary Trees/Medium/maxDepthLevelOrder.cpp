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
int maxDepth(Node* root) {
        if(root==nullptr){
            return 0;
        }
        queue<Node*>q;
        q.push(root);
        int height=0;
        while(!q.empty()){
            int qsize=q.size();
            for(int i=0;i<qsize;i++){
                Node* node=q.front();
                q.pop();
                if(node->left!=nullptr){
                    q.push(node->left);
                }
                if(node->right!=nullptr){
                    q.push(node->right);
                }
            }
            height++;
        }
        return height;
    }
int main(){
    cout<<"max depth";
    return 0;
}