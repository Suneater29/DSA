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
void makein(Node* root,vector<int> &inorder){
    if(root==nullptr) return;
    makein(root->left,inorder);
    inorder.push_back(root->data);
    makein(root->right,inorder);
}
vector<int> mergeBST(Node* root1, Node* root2)
{
    vector<int>ans;
    vector<int>inorder;
    makein(root1,inorder);
    makein(root2,inorder);
    for(int i:inorder){
        ans.push_back(i);
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main(){
    cout<<"merge 2 BSTs";
    return 0;
}