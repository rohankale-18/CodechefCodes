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
       cin>>n;
       cin>>k;
       int sum=0;
       for(int i=1;i<=k;i++){
        sum+=i;
       }
       if(n>=sum){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }
    return 0;
}