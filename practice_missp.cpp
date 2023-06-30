#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
//Bitwise XOR concept
int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n,count=0;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       for(int i=0;i<n;i++){
            count^=arr[i];
       }
       cout<<count<<endl;
    }
    return 0;
}