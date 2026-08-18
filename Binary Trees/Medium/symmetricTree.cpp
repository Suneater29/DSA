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
bool mirror(Node* node1,Node* node2){
    if(node1==nullptr || node2==nullptr){
        return node1==node2;
    }
    return (node1->data==node2->data) && (mirror(node1->left,node2->right)) && (mirror(node1->right,node2->left));
}
bool isSymmetric(Node* root)
{
    if(root==nullptr) return true;;
    return mirror(root->left,root->right);
}
int main(){
    cout<<"symmetric tree";
    return 0;
}