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
       int n,k,v;
       cin>>n>>k>>v;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int sum=0;
       sum=accumulate(a,a+n,sum);
       int x=(v*(n+k)-sum);

       if(x>0 && x%k==0){
        cout<<x/k<<endl;
       }
       else{
        cout<<"-1"<<endl;
       }
    }
    return 0;
}