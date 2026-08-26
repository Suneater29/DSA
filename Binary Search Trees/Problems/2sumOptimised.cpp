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
class BSTiterator{
    stack<Node*>st;
    bool reverse=true;

public:
    BSTiterator(Node*root,bool isreverse){
        reverse=isreverse;
        pushin(root);
    }

    bool hasNext(){
        if(st.empty()) return false;
        return true;
    }

    int next(){
        Node*topnode=st.top();
        st.pop();
        if(!reverse) pushin(topnode->right);
        else pushin(topnode->left);
        return topnode->data;
    }

private:
    void pushin(Node*root){
        while(root!=nullptr){
            st.push(root);
            if(reverse==true) root=root->right;
            else root=root->left;
        }
    }
};
bool findTarget(Node*root, int k) {
    if(root==nullptr) return false;
    BSTiterator left(root,false);
    BSTiterator right(root,true);
    int low=left.next();
    int high=right.next();
    while(low<high){
        if(low+high==k) return true;
        else if(low+high<k) low=left.next();
        else high=right.next();
    }
    return false;
}

int main(){
    cout<<"2 sum check in BST using BST iterator";
    return 0;
}