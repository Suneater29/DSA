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
int height(Node* root,int &diameter){
    if(root==nullptr) return 0;
    int leftHeight=height(root->left,diameter);
    int rightHeight=height(root->right,diameter);
    diameter=max(diameter,leftHeight+rightHeight);
    return 1+max(leftHeight,rightHeight);
}
int findDiameter(Node* root){
    int diameter=0;
    height(root,diameter);
    return diameter;
}
int main(){
    cout<<"Diameter by optimised approach";
    return 0;
}