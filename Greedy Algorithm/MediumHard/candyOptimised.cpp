#include<bits/stdc++.h>
using namespace std;
int mincandy(vector<int> &ratings,int n){
        int i=1;
        int sum=n;
        while(i<n){
            if(i<n && ratings[i]==ratings[i-1]){
                i++;
                continue;
            }
            int peak=0;   
            while(i<n && ratings[i]>ratings[i-1]){
                peak++;
                sum+=peak;
                i++;
            }
            int down=0;
            while(i<n && ratings[i]<ratings[i-1]){
                down++;
                sum+=down;
                i++;
            }
            sum-=min(down,peak);
        }
    return sum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=mincandy(arr,n);
    cout<<ans;
    return 0;
}