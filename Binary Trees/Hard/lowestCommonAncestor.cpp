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
Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
    if(root==nullptr || root==p || root==q){
        return root;
    }
    Node* left=lowestCommonAncestor(root->left,p,q);
    Node* right=lowestCommonAncestor(root->right,p,q);
    if(left==nullptr) return right;
    else if(right==nullptr) return left;
    else return root;
}
int main(){
    cout<<"height";
    return 0;
}