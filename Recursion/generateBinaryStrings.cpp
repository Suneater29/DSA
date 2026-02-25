#include<bits/stdc++.h>
using namespace std;
void generate(int n,string curr,vector<string>&result){
    if(curr.length()==n){
        result.push_back(curr);
        return;
    }
    generate(n,curr+"0",result);
    if(curr.empty() || curr.back()!='1'){
        generate(n,curr+"1",result);
    }
}
vector<string> generatestring(int n){
    vector<string>result;
    generate(n,"",result);
    return result;
}
int main(){
    int n;
    cin>>n;
    generatestring(n);
    return 0;
}