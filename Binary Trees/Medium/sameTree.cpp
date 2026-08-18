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
bool identicalTrees(Node* root1, Node* root2) {
    if(root1==NULL && root2==NULL) return true;
    if(root1==NULL || root2==NULL) return false;
    return (root1->data == root2->data && identicalTrees(root1->left,root2->left) && identicalTrees(root1->right,root2->right)) 	 ;
}
int main(){
    cout<<"same Tree";
    return 0;
}