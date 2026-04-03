#include<bits/stdc++.h>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	stack<int>st;
	vector<int>ans(n);
	for(int i=n-1;i>=0;i--){
		while(!st.empty() && st.top()<=arr[i]){
			st.pop();
		}
		if(st.empty()) ans[i]=-1;
		else ans[i]=st.top();
		st.push(arr[i]);
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
    vector<int>nge=nextGreaterElement(arr,n);
    for(auto it:nge){
        cout<<it<<" ";
    }
    return 0;
}