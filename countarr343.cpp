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
int MOD=998244353;

void modadd(int &a , int b) {a=((a%MOD)+(b%MOD))%MOD;}
void modsub(int &a , int b) {a=((a%MOD)-(b%MOD)+MOD)%MOD;}
void modmul(int &a , int b) {a=((a%MOD)*(b%MOD))%MOD;}

long long power(long long A, long long B,long long MOD)
{
    if (B == 0)
        return 1;
 
    long long res = power(A, B / 2,MOD);
 
    if (B % 2)
        return (res * res * A)%MOD;
    else
        return (res * res)%MOD;
}

void solve(){
    int n,k;
    cin>>n>>k;
    if(k==0){
        cout<<"1\n";
        return;
    }
    int op=power(2,n-1,MOD);
    op=power(op,k,MOD);
    cout<<op<<endl;

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