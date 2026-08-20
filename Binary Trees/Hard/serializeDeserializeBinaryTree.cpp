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
string serializeTree(Node *root)
{
    if(root==nullptr) return "";
    string ans="";
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        if(node==nullptr) ans+="#,";
        else ans+=(to_string(node->data))+",";
        if(node!=nullptr){
            q.push(node->left);
            q.push(node->right);
        }
    }
    return ans;
}
Node* deserializeTree(string &data)
{
    if(data.size()==0) return nullptr;
    stringstream s(data);
    string str;
    getline(s,str,',');
    Node* root=new Node(stoi(str));
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
        Node* node=q.front();
        q.pop();
        getline(s,str,',');
        if(str=="#") node->left=nullptr;
        else{
            Node* leftnode=new Node(stoi(str));
            node->left=leftnode;
            q.push(leftnode);
        } 
        getline(s,str,',');
        if(str=="#") node->right=nullptr;
        else{
            Node* rightnode=new Node(stoi(str));
            node->right=rightnode;
            q.push(rightnode);
        } 
    }
    return root;
}
int main(){
    cout<<"serialized and deserialized binary tree";
    return 0;
}