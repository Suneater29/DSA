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
vector<Node*> findPreSuc(Node* root, int key) {
    vector<Node*>ans;
    Node* pre=nullptr;
    Node* succ=nullptr;
    while(root!=nullptr){
        if(root->data<key){
            pre=root;
            root=root->right;
        }
        else if(root->data>key){
            succ=root;
            root=root->left;
        }
        else{
            if(root->left!=nullptr){
                Node* temp=root->left;
                while(temp->right!=nullptr){
                    temp=temp->right;
                }
                pre=temp;
            }
            if(root->right!=nullptr){
                Node* temp=root->right;
                while(temp->left!=nullptr){
                    temp=temp->left;
                }
                succ=temp;
            }
            break;
        }
    }
    ans.push_back(pre);
    ans.push_back(succ);
    return ans;
}
int main(){
    cout<<"find predecessor and successor in BST";
    return 0;
}