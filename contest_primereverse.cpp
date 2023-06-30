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
       string a,b;
       cin>>n>>a>>b;

       int a1=0,a0=0,b1=0,b0=0;
       for(int i=0;i<n;i++){
        if(a[i]=='0'){
            a0++;
        }
        else{
            a1++;
        }
       }
       for(int i=0;i<n;i++){
        if(b[i]=='0'){
            b0++;
        }
        else{
            b1++;
        }
       }
       if(a0==b0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}