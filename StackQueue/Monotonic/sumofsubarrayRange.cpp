#include<bits/stdc++.h>
using namespace std;
vector<int>findnse(vector<int> &nums){
        vector<int>ans(nums.size());
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=nums.size();
            }
            st.push(i);
        }
        return ans;
}
vector<int>findnge(vector<int> &nums){
        vector<int>ans(nums.size());
        stack<int>st;
        for(int i=nums.size()-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=nums.size();
            }
            st.push(i);
        }
        return ans;
}
vector<int>findpsee(vector<int> &nums){
        vector<int>ans(nums.size());
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()]>nums[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=-1;
            }
            st.push(i);
        }
        return ans;
}
vector<int>findpgee(vector<int> &nums){
        vector<int>ans(nums.size());
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            while(!st.empty() && nums[st.top()]<nums[i]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]=st.top();
            }
            else{
                ans[i]=-1;
            }
            st.push(i);
        }
        return ans;
}
long long minsubarraysum(vector<int> &nums){
        vector<int>nse=findnse(nums);
        vector<int>psee=findpsee(nums);
        long long minsum=0;
        for(int i=0;i<nums.size();i++){
            long long left=i-psee[i];
            long long right=nse[i]-i;
            minsum=minsum+((left*right)*(long long)nums[i]);
        }
        return minsum;
}
long long maxsubarraysum(vector<int> &nums){
        vector<int>nge=findnge(nums);
        vector<int>pgee=findpgee(nums);
        long long maxsum=0;
        for(int i=0;i<nums.size();i++){
            long long left=i-pgee[i];
            long long right=nge[i]-i;
            maxsum=maxsum+((left*right)*(long long)nums[i]);
        }
        return maxsum;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int res=maxsubarraysum(nums)-minsubarraysum(nums);
    cout<<res;
    return 0;
}