#include<bits/stdc++.h>
using namespace std;
vector<int>majority(vector<int>&arr,int n){
    int count1=0;
    int count2=0;
    int element1=INT_MIN;
    int element2=INT_MIN;
    for(int i=0;i<n;i++){
        if(count1==0 && element1!=arr[i]){
            count1=1;
            element1=arr[i];
        }
        else if (count2==0 && element1!=arr[i]){
            count2=1;
            element2=arr[i];
        }
        else if(arr[i]==element1){
            count1++;
        }
        else if(arr[i]==element2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int>ans;
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==element1){
            cnt1++;
        }
        if(arr[i]==element2){
            cnt2++;
        }
    }
    int min=(int)(n/3)+1;
    if(cnt1>=min){
        ans.push_back(element1);
    }
    if(cnt2>=min){
        ans.push_back(element2);
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
    vector<int>ans=majority(arr,n);
    for(auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}