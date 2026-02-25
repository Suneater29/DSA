#include<bits/stdc++.h>
using namespace std;
void insert(stack<int> &s,int temp){
	if(s.empty() || s.top()<=temp){
		s.push(temp);
		return;
	}
	int val=s.top();
	s.pop();
	insert(s,temp);
	s.push(val);
}
stack<int> sortStack(stack<int> &s)
{
	if(!s.empty()){
		int temp=s.top();
		s.pop();
		sortStack(s);
		insert(s,temp);
	}
	return s;
}
int main() {
    stack<int> s;
    int n;
    cin >> n; 
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push(x);
    }
}