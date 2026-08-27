#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data){
        data=data;
        left=right=nullptr;
    }
};
class Nodes{
public :
    int maxSum;
    int maxNode;
    int minNode;
    Nodes(int maxSum,int maxNode,int minNode){
        this->maxSum=maxSum;
        this->maxNode=maxNode;
        this->minNode=minNode;
    }
};
class Solution {
  private:
    int ans=0;
    Nodes largestBST(Node* root){
        if(root==nullptr){
            return Nodes(0,INT_MIN,INT_MAX);
        }
        auto leftTree=largestBST(root->left);
        auto rightTree=largestBST(root->right);
        if(leftTree.maxNode < root->data && rightTree.minNode>root->data){
            int currSum=root->data+leftTree.maxSum+rightTree.maxSum;
            ans=max(ans,currSum);
            return Nodes(1+leftTree.maxSum+rightTree.maxSum,max(root->data,rightTree.maxNode),min(root->data,leftTree.minNode));
        }
        return Nodes(max(leftTree.maxSum,rightTree.maxSum),INT_MAX,INT_MIN);
    }
  public:
    int largestBst(Node *root) {
        largestBST(root);
        return ans;
    }
};
int main(){
    cout<<"largest BST sum from BT ";
    return 0;
}