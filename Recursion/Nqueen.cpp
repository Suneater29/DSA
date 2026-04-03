#include<bits/stdc++.h>
using namespace std;
void solve(int col,vector<string> &board,int n,vector<int> &leftrow,vector<int> &lowdiag,vector<int> &updiag,vector<vector<string>> &ans){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(leftrow[row]==0 && lowdiag[row+col]==0 && updiag[(n-1)+(col-row)]==0){
            board[row][col]='Q';
            leftrow[row]=1;
            lowdiag[row+col]=1;
            updiag[(n-1)+(col-row)]=1;
            solve(col+1,board,n,leftrow,lowdiag,updiag,ans);
            board[row][col]='.';
            leftrow[row]=0;
            lowdiag[row+col]=0;
            updiag[(n-1)+(col-row)]=0;
        }
    }
}
vector<vector<string>>nqueen(int n){
    vector<vector<string>>ans;
    vector<string>board(n,string(n,'.'));
    vector<int>leftrow(n,0);
    vector<int>lowdiag(2*n-1,0);
    vector<int>updiag(2*n-1,0);
    solve(0,board,n,leftrow,lowdiag,updiag,ans);
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<vector<string>>res=nqueen(n);
    for(auto it:res){
        for(auto x:it){
            cout<<x<<endl;
        }
        cout<<endl;
    }
    return 0;
}