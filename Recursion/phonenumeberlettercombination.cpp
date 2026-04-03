#include<bits/stdc++.h>
using namespace std;
void generate(const string &digits,string numdigit[],int index,string &s,vector<string> &ans){
    if(s.size()==digits.size()){
        ans.push_back(s);
        return;
    }
    int digit=digits[index]-'0';
    for(int i=0;i<numdigit[digit].size();i++){
        s.push_back(numdigit[digit][i]);
        generate(digits,numdigit,index+1,s,ans);
        s.pop_back();
    }
}
vector<string>combinationphonenum(string digits){
    string numdigit[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string>ans;
    string s="";
    generate(digits,numdigit,0,s,ans);
    return ans;
}
int main(){
    string digits;
    cin>>digits;
    vector<string>res=combinationphonenum(digits);
    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}