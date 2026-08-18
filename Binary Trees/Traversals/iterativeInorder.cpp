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
vector<int> inorderTraversal(Node* root) {
    vector<int>inorder;
    stack<Node*>st;
    Node* node=root;
    while(true){
        if(node!=nullptr){
            st.push(node);
            node=node->left;
        }
        else{
            if(st.empty()==true) break;
            node=st.top();
            inorder.push_back(node->data);
            node=node->right;
        }
    }
    return inorder;
}
int main(){
    cout<<"iterative inorder traversal";
    return 0;
}