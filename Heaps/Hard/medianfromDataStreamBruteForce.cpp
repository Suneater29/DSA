#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
void addNum(int num) {
    arr.push_back(num);
}
    
double findMedian() {
    sort(arr.begin(),arr.end());
    int n=arr.size();
    if(n%2==1) return arr[n/2];
    return (arr[n/2]+arr[(n/2)-1])/2.0;
}
int main(){
    cout<<"median in a data stream ";
    return 0;
}