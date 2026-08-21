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
vector<int> preOrder(Node *root){
    vector<int>preorder;
    Node* curr=root;
        while(curr!=nullptr){
            if(curr->left==nullptr){
                preorder.push_back(curr->data);
                curr=curr->right;
            }
            else{
                Node* prev=curr->left;
                while(prev->right!=nullptr && prev->right!=curr){
                    prev=prev->right;
                }
                if(prev->right==nullptr){
                    prev->right=curr;
                    preorder.push_back(curr->data);
                    curr=curr->left;
                }
                else{
                    prev->right=nullptr;
                    curr=curr->right;
                }
            }
        }
    return preorder;
}
int main(){
    cout<<"Morris Inorder Traversal";
    return 0; 
}