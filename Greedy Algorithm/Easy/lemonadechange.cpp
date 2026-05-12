#include<bits/stdc++.h>
using namespace std;
bool lemonade(vector<int> &arr,int n){
    int five=0;
    int ten=0;
    for(int i:arr){
        if(i==5) five++;
        else if(i==10){
            if(five>0){
                ten++;
                five--;
            }
            else{
                return false;
            }
        }
        else{
            if(ten>0 && five>0){
                five--;
                ten--;
            }
            else if(five>=3){
                five=five-3;
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result=lemonade(arr,n);
    cout<<result;
    return 0;
}