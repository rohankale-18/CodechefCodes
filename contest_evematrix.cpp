#include<bits/stdc++.h>
#define int long long
#define uint unsigned long long
#define si(x)  scanf("%d",&x)
#define sl(x)  scanf("%lld",&x)
#define ss(s)  scanf("%s",s)
#define pi(x)  printf("%d ",&x)
#define pl(x)  printf("%lld ",&x)
#define ps(s)  printf("%s ",s)
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
#define nl cout<<"\n"
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

template<typename typC,typename typD> istream &operator>>(istream &cin,pair<typC,typD> &a) { return cin>>a.first>>a.second; }
template<typename typC> istream &operator>>(istream &cin,vector<typC> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const pair<typC,typD> &a) { return cout<<a.first<<' '<<a.second; }
template<typename typC,typename typD> ostream &operator<<(ostream &cout,const vector<pair<typC,typD>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename typC> ostream &operator<<(ostream &cout,const vector<typC> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }

void solve(){
    int n;
    cin>>n;
    int k=1;
    vvi v(n,vector<int> (n));
    if(n==2){
        cout<<"-1\n";
        return;
    }
    if(n&1){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                v[i][j]=k++;
            }
        }
        for(int i=1;i<n;i+=2){
            swap(v[1][i],v[1][i+1]);
        }
    }else{
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-1;j++){
                v[i][j]=k++;
            }
        }
        for(int i=1;i<n-1;i+=2){
            swap(v[1][i],v[1][i+1]);
        }
        for(int i=0;i<n;i++){
            v[i][n-1]=k++;
        }
        for(int i=n-2;i>=0;i--){
            v[n-1][i]=k++;
        }
        swap(v[n-2][0],v[n-2][1]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }cout<<endl;
    }
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