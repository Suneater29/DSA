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
stack<Node*>st;
void pushin(Node* root){
    while(root!=nullptr){
        st.push(root);
        root=root->left;
    }
}

// int aese hi daala h 
int BSTIterator(Node* root) {
    pushin(root);
}
int next() {
    Node* topnode=st.top();
    st.pop();
    pushin(topnode->right);
    return topnode->data;
}
bool hasNext() {
    if(st.empty()) return false;
    return true;
}
int main(){
    cout<<"Iterate over a BST";
    return 0;
}