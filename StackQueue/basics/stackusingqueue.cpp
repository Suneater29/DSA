#include<bits/stdc++.h>
using namespace std;
void stackusingqueue(){
    class MyStack {
    queue<int>q;
    public:
        MyStack() {
            
        }
        
        void push(int x) {
            q.push(x);
            for(int i=0;i<q.size()-1;i++){
                q.push(q.front());
                q.pop();
            }
        }
        
        int pop() {
            int ans=q.front();
            q.pop();
            return ans;
        }
        
        int top() {
            return q.front();
        }
        
        bool empty() {
            return q.empty();
        }
    };
}
int main(){
    cout<<"hllow world";
    return 0;
}