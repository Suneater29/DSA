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
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"^";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"&";
        }
        cout<<endl;
    }
    
    return 0;
}