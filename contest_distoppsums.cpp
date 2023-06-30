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
       for(int i=n/2;i>=1;i--){
        cout<<i<<" ";
       }
       for(int i=(n/2)+1;i<=n;i++){
        cout<<i<<" ";
       }
       cout<<endl;
    }
    return 0;
}