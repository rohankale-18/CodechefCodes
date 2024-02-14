#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long

using namespace std;
int MOD=1e9+7;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(a*c,b*c)<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T = 1;
    // cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}