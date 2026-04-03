#include<bits/stdc++.h>
using namespace std;
void minstack(){
    class MinStack {
    stack<long long>st;
    long long mini;
    public:
        MinStack() {
            
        }
        
        void push(int val) {
            if(st.empty()){
                st.push(val);
                mini=val;
            }
            else if(val>mini){
                st.push(val);
            }
            else{
                st.push(2*(long long)val-mini);
                mini=val;
            }
        }
        
        void pop() {
            if(st.empty()) return;
            long long topval=st.top();
            st.pop();
            if(topval<mini){
                mini=2*mini-topval;
            }
        }
        
        int top() {
            if(st.empty()) return -1;
            long long topval=st.top();
            if(topval<mini){
                return mini;
            }
            return topval;
        }
        
        int getMin() {
            if(st.empty()) return -1;
            return mini;
        }
    };
}
int main(){
    cout<<"helow world";
    return 0;
}