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
       if(((n/m)%2)==0 && n%m==0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}