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
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int add=0;
       for(int i=0;i<n;i++){
        add=add+max(llabs(a[i]-1),llabs(a[i]-m));
       }
       cout<<add<<endl;
    }
    return 0;
}