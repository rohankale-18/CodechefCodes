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
       int n,count=0,ans=0;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       for(int i=0;i<n;i++){
        if(a[i]!=0 && b[i]!=0){
            count++;
            ans=max(count,ans);
        }
        else{
            count=0;
        }
       }
       cout<<ans<<endl;
    }
    return 0;
}