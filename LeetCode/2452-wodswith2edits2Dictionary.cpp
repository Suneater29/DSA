#include<bits/stdc++.h>
using namespace std;
vector<string>maxwordedit(vector<string>& query,int n ,vector<string>& dictionary,int m){
    vector<string>ans;
    for(auto &q:query){
        for(auto &d:dictionary){
            int diff=0;
            for(int i=0;i<n;i++){
                if(q[i]!=d[i]) diff++;
                if(diff>2) break;
            }
            if(diff<=2){
                ans.push_back(q);
                break;
            }
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string>query(n);
    for(int i=0;i<n;i++){
        cin>>query[i];
    }
    int m;
    cin>>m;
    vector<string>dictionary(m);
    for(int i=0;i<m;i++){
        cin>>dictionary[i];
    }
    vector<string>result=maxwordedit(query,n,dictionary,m);
    for(auto it:result){
        cout<<it<<" ";
    }
    return 0;
}

// TC = O(n*m*k) n=size of query m=size of dictonary k=size of ans