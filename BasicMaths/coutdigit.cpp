#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
        int last =n%10;
        count++;
        n=n/10;
    }
    cout<<count;
    return 0;
}


//logarithmic way 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count =int (log10(n)+1);
    cout<<count;
    return 0;
}