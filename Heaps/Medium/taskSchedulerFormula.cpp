#include<bits/stdc++.h>
using namespace std;
int scheduler(vector<char> &arr,int n,int k){
    vector<int>freq(26,0);
        for(char c:arr){
            freq[c-'A']++;
        }
        sort(freq.begin(),freq.end());
        int maxfreq=freq[25];
        int maxcnt=0;
        for(int i=25;i>0;i--){
            if(freq[i]==maxfreq) maxcnt++;
            else break;
        }
        int part=((maxfreq-1)*(k+1))+maxcnt;
        return max(n,part);
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