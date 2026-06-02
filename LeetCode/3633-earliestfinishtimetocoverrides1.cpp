#include<bits/stdc++.h>
using namespace std;
int earliesttime(vector<int> &landStartTime,vector<int> &landDuration,vector<int> &waterStartTime,vector<int> &waterDuration){
    int mintime=INT_MAX;
    int n=landStartTime.size();
    int m=waterStartTime.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int landend=landStartTime[i]+landDuration[i];
            int waterstart=max(landend,waterStartTime[j]);
            int totaltime1=waterstart+waterDuration[j];
            int waterend=waterStartTime[j]+waterDuration[j];
            int landstart=max(waterend,landStartTime[i]);
            int totaltime2=landstart+landDuration[i];
            mintime=min({mintime,totaltime1,totaltime2});
        }
    }
    return mintime;
}
int main(){
    int n;
    cin>>n;
    vector<int>landStartTime(n);
    for(int i=0;i<n;i++){
        cin>>landStartTime[i];
    }
    int m;
    cin>>m;
    vector<int>landDuration(m);
    for(int i=0;i<m;i++){
        cin>>landDuration[i];
    }
    int p;
    cin>>p;
    vector<int>waterStartTime(p);
    for(int i=0;i<p;i++){
        cin>>waterStartTime[i];
    }
    int q;
    cin>>q;
    vector<int>waterDuration(q);
    for(int i=0;i<q;i++){
        cin>>waterDuration[i];
    }
    int ans=earliesttime(landStartTime,landDuration,waterStartTime,waterDuration);
    cout<<ans;
    return 0;
}