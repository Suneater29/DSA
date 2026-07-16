#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>threesum(vector<int> &arr,int n){
    sort(arr.begin(),arr.end());
    vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        int low=i+1;
        int high=n-1;
        while(low<high){
            int sum=arr[i]+arr[low]+arr[high];
            if(sum==0){
                ans.push_back({arr[i],arr[low],arr[high]});
                low++;
                high--;
                while(low<high && arr[low]==arr[low-1]) low++;
                while(low<high && arr[high]==arr[high+1]) high--;
            }
            else if(sum>0) high--;
            else low++;
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
    vector<vector<int>>result=threesum(arr,n);
    for(auto it : result){
        for(auto num : it){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}