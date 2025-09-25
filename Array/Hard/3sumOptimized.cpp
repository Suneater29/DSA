#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>sum(vector<int>&arr,int n){
    vector<vector<int>>ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum<0){
                j++;
            }
            else if(sum>0){
                k--;
            }
            else{
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]) j++;
                while(j<k && arr[k]==arr[k+1]) k--;
            }
        }
    }
    return ans;
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