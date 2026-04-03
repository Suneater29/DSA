#include<bits/stdc++.h>
using namespace std;
int largestrect(vector<int> &hist){
    stack<int>st;
    int area=0;
    int nse,pse;
    for(int i=0;i<hist.size();i++){
        while(!st.empty() && hist[st.top()]>hist[i]){
            int element=st.top();
            st.pop();
            nse=i;
            pse=st.empty()?-1:st.top();
            area=max(area,hist[element]*(nse-pse-1));
        }
        st.push(i);
    }
    while(!st.empty()){
        int element=st.top();
        st.pop();
        nse=hist.size();
        pse=st.empty()?-1:st.top();
        area=max(area,hist[element]*(nse-pse-1));
    }
    return area;
}
int maximalrect(vector<vector<int>> &arr,int n,int m){
    int maxarea=0;
    vector<int>hist(m,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1){
                hist[j]++;
            }
            else{
                hist[j]=0;
            }
        }
        maxarea=max(maxarea,largestrect(hist));
    }
    return maxarea;
}
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int res=maximalrect(arr,n,m);
    cout<<res;
    return 0;
}