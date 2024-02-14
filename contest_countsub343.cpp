#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vvi vector<vi >
#define vb vector<bool>
#define vvb vector<vb >
#define pii pair<int,int>
#define vpii vector<pair<int,int>>
#define vvpii vector<vector<pair<int,int>>>
#define fr(i,n) for(int i=0; i<(n); i++)
#define rep(i,a,n) for(int i=(a); i<=(n); i++)
#define dbg(var) cout<<#var<<"="<<var<<" "
#define tr(it, a) for(auto it=a.begin(); it!=a.end();it++)
#define all(v) v.begin(),v.end()
#define srt(v)  sort(v.begin(),v.end())
#define mxe(v)  *max_element(v.begin(),v.end())
#define mne(v)  *min_element(v.begin(),v.end())
#define unq(v)  v.resize(distance(v.begin(), unique(v.begin(), v.end())));
#define bin(x,y)  bitset<y>(x)

using namespace std;
int MOD=1e9+7;

void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}

void solve(){
    int n;
    cin>>n;
    vi v(n);
    fr(i,n){
        cin>>v[i];
    }
    vi vectpre(n+1);
    for(int i=0;i<n;i++){
        vectpre[i+1]=vectpre[i]+v[i];
    }
    vector<int> ans(n+1,0);
    // for(int i=0;i<n;i++){
    //     mp[v[i]]++;
    // }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            int diff = vectpre[j] - vectpre[i];
            if(diff>n) break;
            ans[diff]++;
        }
    }
    // cout<<endl;
    // for(int i=0;i<pre.size();i++){
    //     cout<<pre[i]<<" ";
    // }cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T = 1;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}