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
        int leftDepth=maxDepth(root->left);
        int rightDepth=maxDepth(root->right);
        return 1+max(leftDepth,rightDepth);
    }
int main(){
    cout<<"depth using recursion";
    return 0;
}