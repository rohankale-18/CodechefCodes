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
       int n,m;
       cin>>n>>m;
       vector<int> v(m);
       for(int i=0;i<m;i++){
        cin>>v[i];
       }
       int diff=0;
       for(int i=0;i<m;i++){
        diff+=(n-v[i]);
       }
       if(diff<=n){
        cout<<(n-diff)<<endl;
       }
       else{
        cout<<0<<endl;
       }
    }
    return 0;
}