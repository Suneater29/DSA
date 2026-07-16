#include<bits/stdc++.h>
using namespace std;
int threesum(vector<int> &arr,int n,int target){
    sort(arr.begin(),arr.end());
    int diff=INT_MAX;
    int ans=0;
    for(int i=0;i<n;i++){
        int low=i+1;
        int high=n-1;
        while(low<high){
            int sum=arr[i]+arr[low]+arr[high];
            int more=abs(sum-target);
            if(more<diff || (more==diff && sum>ans)){
                diff=more;
                ans=sum;
            }
            if(sum>target) high--;
            else if(sum<target) low++;
            else return target;
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
    int target;
    cin>>target;
    int result=threesum(arr,n,target);
    cout<<result;
    return 0;
}