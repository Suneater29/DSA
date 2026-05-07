#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>>pq;
int x;
int KthLargest(int k, vector<int>& nums) {
    x=k;
    for(int i:nums){
        pq.push(i);
        if(pq.size()>x) pq.pop();
    }
}
int add(int val) {
    pq.push(val);
    if(pq.size()>x) pq.pop();
    return pq.top();
}
int main(){
    cout<<"kth largest in an integer stream";
    return 0;
}