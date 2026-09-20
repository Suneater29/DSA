#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int sum=0;
    for(int i=0;i<n;i++){
        int pos=26-(s[i]-'a');
        int index=i+1;
        sum+=pos*index;
    }
    cout<<sum;
    return 0;
}