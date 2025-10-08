#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>sum(vector<int>&arr,int n,int target){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                for(int m=k+1;m<n;m++){
                    long long sum=arr[i]+arr[j];
                    sum+=arr[k];
                    sum+=arr[m];
                    if(sum==target){
                        vector<int>quad={arr[i],arr[j],arr[k],arr[m]};
                        sort(quad.begin(),quad.end());
                        st.insert(quad);
                    }
                }
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    vector<vector<int>>ans=sum(arr,n,target);
    for(auto it : ans){
        for(auto num: it ){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}