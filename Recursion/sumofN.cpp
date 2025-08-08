//PARAMETERISED WAY
#include<bits/stdc++.h>
using namespace std;
void func(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    func(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    func(n,0);
    return 0;
}

//FUNCTIONAL WAY
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}