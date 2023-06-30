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
       int x,y;
       cin>>x>>y;
       int buy=x-y;
       int sell=x/10 + x;
       cout<<sell-buy<<endl;
    }
    return 0;
}