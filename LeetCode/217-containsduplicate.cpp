#include<bits/stdc++.h>
using namespace std;
bool isDuplicate(vector<int>&arr){
    sort(arr.begin(),arr.end());
    for(int i=1;i<arr.size();i++){
        if(arr[i-1]==arr[i]){
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool result=isDuplicate(arr);
    if (result){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}


//My code (Brute Force method)
// #include<bits/stdc++.h>
// using namespace std;
// bool isDuplicate(int arr[],int n){
//     for(int i=0;i<n;i++){
//         if(arr[i]==arr[i-1]){
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bool result = isDuplicate(arr,n);
//     if (result){
//         cout<<"True";
//     }
//     else{
//         cout<<"False";
//     }
//     return 0;
// }