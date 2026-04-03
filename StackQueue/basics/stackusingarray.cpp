#include<bits/stdc++.h>
using namespace std;
void stackbyarray(){
        class Stack {
        int* starray;
        int size;
        int topindex;
    public:
        
        Stack(int capacity) {
            size=capacity;
            starray=new int[size];
            topindex=-1;
        }

        void push(int num) {
            if(topindex==size-1){
                return;
            }
            else{
                topindex++;
                starray[topindex]=num;
            }
        }

        int pop() {
            if(topindex==-1){
                return -1;
            }
            int ans=starray[topindex];
            topindex--;
            return ans;
        }
        
        int top() {
            if(topindex==-1){
                return -1;
            }
            return starray[topindex];
        }
        
        int isEmpty() {
            return topindex==-1;
        }
        
        int isFull() {
            return topindex==size-1;
        }
        
    };
}
int main(){
    cout<<"Hellow world";
    return 0;
}