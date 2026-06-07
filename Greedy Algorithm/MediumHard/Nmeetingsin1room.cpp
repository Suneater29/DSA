#include<bits/stdc++.h>
using namespace std;
int meetingsinroom(vector<int> &start,vector<int> &end,int n){
    vector<pair<int,int>>meetings;
    for(int i=0;i<n;i++){
        meetings.push_back({end[i],start[i]});
    }
    sort(meetings.begin(),meetings.end());
    int lastend=meetings[0].first;
    int cnt=1;
    for(int i=1;i<n;i++){
        if(meetings[i].second>lastend){
            cnt++;
            lastend=meetings[i].first;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int>start(n);
    for(int i=0;i<n;i++){
        cin>>start[i];
    }
    vector<int>end(n);
    for(int i=0;i<n;i++){
        cin>>end[i];
    }
    int ans=meetingsinroom(start,end,n);
    cout<<ans;
    return 0;
}