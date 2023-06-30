#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int count=0;
       int a[n];
       unordered_map<int,int> mp;
       for(int i=0;i<n;i++){
           cin>>a[i];
           mp[a[i]]++;
       }
       for(auto x : mp){
           if(x.second%2==1){
               count++;
           }
       }
       if(count!=0){
           cout<<"NO"<<endl;
       }
       else{
           cout<<"YES"<<endl;
       }
       
    }
    return 0;
}