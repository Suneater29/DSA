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
class Solution {
private: 
    Node*first;
    Node*middle;
    Node*last;
    Node*prev;

private:
    void inorder(Node*root){
        if(root==nullptr) return;
        inorder(root->left);
        if(prev!=nullptr && (root->data<prev->data)){
            if(first==nullptr){
                first=prev;
                middle=root;
            }
            else{
                last=root;
            }
        }
        prev=root;
        inorder(root->right);
    }
public:
    void recoverTree(Node*root) {
        first=middle=last=nullptr;
        prev=new Node(INT_MIN);
        inorder(root);
        if(first!=nullptr && last!=nullptr){
            swap(first->data,last->data);
        } 
        else if(first !=nullptr && middle!=nullptr){
            swap(first->data,middle->data);
        }
    }
};
int main(){
    cout<<"recover a swapped BST";
    return 0;
}