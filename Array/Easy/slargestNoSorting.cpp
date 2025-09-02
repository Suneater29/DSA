// //BRUTE FORCE METHOD 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int>arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     sort(arr.begin(),arr.end());
//     int second;
//     int largest=arr[n-1];
//     for(int i=n-2;i>=0;i--){
//         if(arr[i]!=largest){
//             second=arr[i];
//             break;
//         }
//     }
//     cout<<second;
//     return 0;
// }
// //TC = O(n+nlogn)



// //BETTER SOLUTION
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int largest=arr[0];
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     int second=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>second && arr[i]!=largest){
//             second=arr[i];
//         }
//     }
//     cout<<second;
//     return 0;
// }
//TC = o(n)+o(n) = o(2n)



//OPTMIZED SOLUTION
#include<bits/stdc++.h>
using namespace std;
int secondLarge(vector<int>&arr,int n){
    int largest=arr[0];
    int second=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
        }
        else if(arr[i]>largest && arr[i]>second){
            second=arr[i];
        }
    }
    return second;
}
int secondSmall(vector<int>&arr,int n){
    int smallest=arr[0];
    int secondS=INT_MAX;
    for(int i=0;i<n;i++){ 
        if(arr[i]<smallest){
            secondS=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i]<secondS){
            secondS=arr[i];
        }
    }
    return secondS;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int secondL=secondLarge(arr,n);
    int secondS=secondSmall(arr,n);
    cout<<secondL<<"\n";
    cout<<secondS;
    return 0;
}

//TC of second largest = o(n)
//TC of second smallest = o(n)