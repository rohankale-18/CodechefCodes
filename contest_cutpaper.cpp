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
       int n,k;
       cin>>n>>k;
       if(floor(n/k)>=1){
        cout<<floor(n/k)*floor(n/k)<<endl;
       }
    }
    return 0;
}