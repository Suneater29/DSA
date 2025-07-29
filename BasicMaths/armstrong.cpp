#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup=n;

    //counting digits 
    int count=0;
    int temp=n;
    while(temp!=0){
        count++;
        temp=temp/10;
    }
    
    //finding armstrong number 
    int sum=0;
    temp=n;
    while(temp!=0){
        int last=temp%10;
        sum=sum+pow(last,count); 
        temp=temp/10;
    }

    //Checking armstrong number 
    if(sum==dup){
        cout<<"armstrong";
    }
    else{
        cout<<"not armstrong";
    }
    return 0;
}

