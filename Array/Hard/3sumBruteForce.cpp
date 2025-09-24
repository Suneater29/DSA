#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>sum(vector<int>&arr,int n){
    set<vector<int>>ans;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int>triplet={arr[i],arr[j],arr[k]};
                    sort(triplet.begin(),triplet.end());
                    ans.insert(triplet);
                }
            }
        }
    }
    // sort(ans.begin(),ans.end());
    return vector<vector<int>>(ans.begin(), ans.end());
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>>res=sum(arr,n);
    for(auto it : res){
        for(auto num : it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}