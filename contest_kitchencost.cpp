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
       int n,x,j=0,ans=0;
       cin>>n>>x;
       int a[n],b[n],c[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       for(int i=0;i<n;i++){
        if(a[i]>=x){
            c[j]=b[i];
            j++;
        }
       }
       for(int i=0;i<j;i++){
        ans+=c[i];
       }
       cout<<ans<<endl;
    }
    return 0;
}