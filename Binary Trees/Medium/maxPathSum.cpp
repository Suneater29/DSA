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
int maxpath(Node* root,int &maxi){
        if(root==nullptr) return 0;
        int leftsum=max(0,maxpath(root->left,maxi));
        int rightsum=max(0,maxpath(root->right,maxi));
        maxi=max(maxi,root->data+leftsum+rightsum);
        return (root->data)+max(leftsum,rightsum);
}
int maxPathSum(Node* root) {
        int maxi=INT_MIN;
        maxpath(root,maxi);
        return maxi;
}
int main(){
    cout<<"max sum of a path";
    return 0;
}