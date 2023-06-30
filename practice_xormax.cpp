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
       string a,b;
       string ans="";
       cin>>a>>b;

       int a0=0,a1=0,b0=0,b1=0;
       for(int i=0;i<a.size();i++){
        if(a[i]=='0'){
            a0++;
        }
        else{
            a1++;
        }
       }
       for(int i=0;i<b.size();i++){
        if(b[i]=='0'){
            b0++;
        }
        else{
            b1++;
        }
       }
       int x=min(a0,b1);
       int y=min(a1,b0);
       for(int i=0;i<x+y;i++){
        ans+="1";
       }
       for(int i=x+y;i<a.size();i++){
        ans+="0";
       }
       cout<<ans<<endl;
    }
    return 0;
}