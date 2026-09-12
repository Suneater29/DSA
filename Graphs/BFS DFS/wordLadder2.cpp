#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> shortestTransitionPaths(string start, string finish, vector<string>& wordPool){
    queue<vector<string>>q;
    unordered_set<string>st(wordPool.begin(),wordPool.end());
    q.push({start});
    vector<string>usedLevel;
    usedLevel.push_back(start);
    int level=0;
    vector<vector<string>>ans;
    while(!q.empty()){
        vector<string>arr=q.front();
        q.pop();
        if(arr.size()>level){
            level++;
            for(auto it:usedLevel){
                st.erase(it);
            }
        }
        string word=arr.back();
        if(word==finish){
            if(ans.size()==0){
                ans.push_back(arr);
            }
            else if(ans[0].size()==arr.size()){
                ans.push_back(arr);
            }
        }
        for(int i=0;i<word.size();i++){
            char original=word[i];
            for(char ch='a';ch<='z';ch++){
                word[i]=ch;
                if(st.count(word)>0){
                    arr.push_back(word);
                    q.push(arr);
                    usedLevel.push_back(word);
                    arr.pop_back();
                }
            }
            word[i]=original;
        }
    }
    return ans;
}
int main(){
    cout<<"Word Ladder 2 : return the minimum changing sequences";
    return 0;
}