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
vector<int> postorderTraversal(Node* root) {
    vector<int>postorder;
    stack<Node*>st;
    Node* curr=root;
    Node* temp;
    while(curr!=nullptr || !st.empty()){
        if(curr!=nullptr){
            st.push(curr);
            curr=curr->left;
        }
        else{
            temp=st.top()->right;
            if(temp==nullptr){
                temp=st.top();
                st.pop();
                postorder.push_back(temp->data);
                while(!st.empty() && temp==st.top()->right){
                    temp=st.top();
                    st.pop();
                    postorder.push_back(temp->data);
                }
            }
            else{
                temp=curr;
            }
        }
    }
    return postorder;
}
int main(){
    cout<<"iterative postorder traversal using 1 stack";
    return 0;
}