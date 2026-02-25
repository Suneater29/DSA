// the same question is also for geeks for geeks
#include<bits/stdc++.h>
using namespace std;
bool isgood(string &num,int index,int suffixsum){
    if(index<0) return true;
    int digit=num[index]-'0';
    if(index!=num.size()-1){
        if(digit<=suffixsum){
            return false;
        }
    }
    return isgood(num,index-1,suffixsum+digit);
}
bool containdigit(string &num,int digit){
    for(char c:num){
        if((c-'0')==digit){
            return true;
        }
    }
    return false;
}
vector<int> goodnumber(int a,int b,int digit){
    vector<int>arr;
    for(int i=a;i<=b;i++){
        string num=to_string(i);
        if(containdigit(num,digit)){
            continue;
        }
        if(isgood(num,num.size()-1,0)){
            arr.push_back(i);
        }
    }
    return arr;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int digit;
    cin>>digit;
    vector<int>ans=goodnumber(a,b,digit);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}