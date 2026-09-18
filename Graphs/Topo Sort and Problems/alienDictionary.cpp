#include<bits/stdc++.h>
using namespace std;
string findOrder(vector<string>& words) {
    int K = 26;
    int n = words.size();
    vector<vector<int>> adj(K);
    vector<int> exists(K, 0);
    for (auto &word : words) {
        for (auto ch : word) {
            exists[ch - 'a'] = 1;
        }
    }
    for (int i = 0; i < n - 1; i++) {
        string s1 = words[i];
        string s2 = words[i + 1];
        int len = min(s1.size(), s2.size());
        bool found = false;
        for (int j = 0; j < len; j++) {
            if (s1[j] != s2[j]) {
                int u = s1[j] - 'a';
                int v = s2[j] - 'a';
                adj[u].push_back(v);
                found = true;
                break;
            }
        }
        if (!found && s1.size() > s2.size()) {
            return "";
        }
    }
    vector<int> indegree(K, 0);
    for (int i = 0; i < K; i++) {
        for (auto it : adj[i]) {
            indegree[it]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < K; i++) {
        if (exists[i] && indegree[i] == 0) {
            q.push(i);
        }
    }
    string ans = "";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        ans += char(node + 'a');
        for (auto it : adj[node]) {
            indegree[it]--;
            if (indegree[it] == 0) {
                q.push(it);
            }
        }
    }
    int uniqueChars = 0;
    for (int i = 0; i < K; i++) {
        if (exists[i]) {
            uniqueChars++;
        }
    }
    if (ans.size() != uniqueChars) {
        return "";
    }
    return ans;
}
int main(){
    cout<<"Alien Dictionary";
    return 0;
}