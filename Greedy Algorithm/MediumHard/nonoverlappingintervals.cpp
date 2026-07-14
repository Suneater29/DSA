#include<bits/stdc++.h>
using namespace std;
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        sort(intervals.begin(),intervals.end(),[](auto& a,auto& b){
            return a[1]<b[1];
        });
        int ans=0;
        int last=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]<last){
                ans++;
            }
            else{
                last=intervals[i][1];
            }
        }
        return ans;
    }
int main(){
    cout<<"helow bitch";
    return 0;
}