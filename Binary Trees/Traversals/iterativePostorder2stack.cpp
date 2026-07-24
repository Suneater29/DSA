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
vector<int> postorderTraversal(Node* root) {
    vector<int>postorder;
    if(root==nullptr) return postorder;
    stack<Node*>st1;
    stack<Node*>st2;
    st1.push(root);
    while(!st1.empty()){
        root=st1.top();
        st1.pop();
        st2.push(root);
        if(root->left!=nullptr) st1.push(root->left);
        if(root->right!=nullptr) st1.push(root->right);
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}
int main(){
    cout<<"traversal";
    return 0;
}