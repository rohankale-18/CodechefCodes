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
       vector<int> v(2*n);
       unordered_map<int,int> mp;
       for(int i=0;i<2*n;i++){
        cin>>v[i];
        mp[v[i]]++;
       }
       int maxc=0;
       for(auto i: mp){
        if(maxc<i.second){
            maxc=i.second;
        }
       } 
       cout<<maxc<<endl;
    }
    return 0;
}