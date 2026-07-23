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
Node* maketree(vector<int> &arr,int i, int n){
    Node* root=new Node(arr[i]);
    root->left=maketree(arr,2*i+1,n);
    root->right=maketree(arr,2*i+2,n);
    return root;
}
Node* createtree(vector<int> &arr,int n){
    return maketree(arr,0,n);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node* ans=createtree(arr,n);
    cout<<ans;
    return 0;
}
