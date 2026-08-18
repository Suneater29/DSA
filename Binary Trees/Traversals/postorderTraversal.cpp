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
void makepost(Node* root  ,vector<int> &postorder){
    if(root==nullptr) return;
    makepost(root->left,postorder);
    makepost(root->right,postorder);
    postorder.push_back(root->data);
}
vector<int>traversal(Node* root){
    vector<int>postorder;
    makepost(root,postorder);
    return postorder;
}
int main(){
    cout<<"postorder traversal";
    return 0;
}