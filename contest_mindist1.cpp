#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    fio;
    int t,k=0;
    cin>>t;
    while(t--){
       int n;
       string a;
       cin>>n>>a;
       int d[n]={0},k=0,m=0;
       for(int i=0;i<n;i++){
        if(a[i]=='1'){
            d[k]=i;
            k++;
        }
       }
       for(int i=0;i<k-1;i++){
        if(abs(d[i+1]-d[i])%2!=0){
            cout<<1<<endl;
            m=1;
            break;
        }
       }
       if(m!=1){
        cout<<2<<endl;
       }
    }
    return 0;
}