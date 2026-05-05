#include<bits/stdc++.h>
using namespace std;
int scheduler(vector<char> &arr,int n,int k){
    vector<int>freq(26,0);
        for(char c:arr){
            freq[c-'A']++;
        }
        priority_queue<int>pq;
        for(int i:freq){
            if(i>0){
                pq.push(i);
            }
        }
        int time=0;
        while(!pq.empty()){
            int cycle=k+1;
            vector<int>remtask;
            while(cycle-- && !pq.empty()){
                int curr=pq.top();
                pq.pop();
                if(curr-1>0){
                    remtask.push_back(curr-1);
                }
                time++;
            }
            for(int i:remtask){
                pq.push(i);
            }
            if(pq.empty()) break;
            time+=cycle+1;
        }
        return time;
}
int main(){
    int n;
    cin>>n;
    vector<char>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans=scheduler(arr,n,k);
    cout<<ans;
    return 0;
}