#include<bits/stdc++.h>
using namespace std;
vector<double>getMedian(vector<int> &arr) {
    vector<double>ans;
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    for(int i:arr){
        maxheap.push(i);
        minheap.push(maxheap.top());
        maxheap.pop();
        if(minheap.size()>maxheap.size()){
            maxheap.push(minheap.top());
            minheap.pop();
        }
        if(maxheap.size()==minheap.size()){
            ans.push_back((maxheap.top()+minheap.top())/2.0);
        }
        else ans.push_back(maxheap.top());
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
    vector<double>res=getMedian(arr);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}