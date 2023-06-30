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
       int n,x;
       cin>>n>>x;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);
       cout<<a[n-x]-1<<endl;
    }
    return 0;
}