#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>sum(vector<int>&arr,int n){
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        unordered_set<int>seen;
        for(int j=i+1;j<n;j++){
            int target=-(arr[i]+arr[j]);
            if(seen.find(target)!=seen.end()){
                vector<int>triplet={arr[i],arr[j],target};
                sort(triplet.begin(),triplet.end());
                st.insert(triplet);
            }
            seen.insert(arr[j]);
        }
    }
    return vector<vector<int>>(st.begin(),st.end());
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