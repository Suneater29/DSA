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
int findceil(Node* root,int key){
    int ceil=-1;
    while(root!=nullptr){
        if(root->data==key){
            ceil=root->data;
            return ceil;
        }
        if(root->data<key){
            root=root->right;
        }
        else{
            ceil=root->data;
            root=root->left;
        }
    }
}
int main(){
    cout<<"finding ceil of a key in BST";
    return 0;
}