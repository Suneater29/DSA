#include<bits/stdc++.h>
using namespace std;
double angle(int hour , int minute){
    double minuteHand=minute*6.0;
    double hourHand=hour*30+minute*0.5;
    double result=abs(hourHand-minuteHand);
    return min(result,360.0-result);
}
int main(){
    int hour;
    cin>>hour;
    int minute;
    cin>>minute;
    double ans=angle(hour,minute);
    cout<<ans;
    return 0;
}