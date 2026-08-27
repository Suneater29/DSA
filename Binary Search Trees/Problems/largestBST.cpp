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
class Nodes{
public :
    int maxSize;
    int maxNode;
    int minNode;
    Nodes(int maxSize,int maxNode,int minNode){
        this->maxSize=maxSize;
        this->maxNode=maxNode;
        this->minNode=minNode;
    }
};
class Solution {
  private:
    Nodes largestBST(Node* root){
        if(root==nullptr){
            return Nodes(0,INT_MIN,INT_MAX);
        }
        auto leftTree=largestBST(root->left);
        auto rightTree=largestBST(root->right);
        if(leftTree.maxNode < root->data && rightTree.minNode>root->data){
            return Nodes(1+leftTree.maxSize+rightTree.maxSize,max(root->data,rightTree.maxNode),min(root->data,leftTree.minNode));
        }
        return Nodes(max(leftTree.maxSize,rightTree.maxSize),INT_MAX,INT_MIN);
    }
  public:
    int largestBst(Node *root) {
        return largestBST(root).maxSize;
    }
};
int main(){
    cout<<"construct BST from preorder traversal";
    return 0;
}