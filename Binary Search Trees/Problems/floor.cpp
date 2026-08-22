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
int Floor(Node *node, int input){
	int floor=-1;
    while(node!=nullptr){
        if(node->data==input){
            floor=node->data;
            return floor;
        }
        if(node->data<input){
            floor=node->data;
            node=node->right;
        }
        else{
            node=node->left;
        }
    }
    return floor; 
}

int main(){
    cout<<"finding floor of a key in BST";
    return 0;
}