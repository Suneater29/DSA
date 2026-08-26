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
Node* makebst(vector<int> &pre,int &index,int ub){
    if(index==pre.size()-1 || pre[index]>ub) return nullptr;
    Node* node=new Node(pre[index++]);
    node->left=makebst(pre,index,node->data);
    node->right=makebst(pre,index,ub);
    return node;
}
Node* BSTfrompre(vector<int> &pre){
    int index=0;
    return makebst(pre,index,INT_MAX);
}
int main(){
    cout<<"construct BST from preorder traversal";
    return 0;
}