#include<bits/stdc++.h>
#include <algorithm>
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
       int a,b;
       cin>>a>>b;
       int x;
       x=__gcd(a,b);
       int ans;
       ans=lcm(a,x)-__gcd(b,x);
       cout<<ans<<endl;
    }
    return 0;
}