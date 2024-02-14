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
       string s;
       cin>>s;
       if(n==1 || n==4){
        cout<<"YES"<<endl;
       }
       else if(n==2 || n==3){
        cout<<"NO"<<endl;
       }
       else if(n==5){
        if(s[0]==s[n-1]){
            cout<<"YES"<<endl;
        }
        else if(s[0]==s[1]){
            cout<<"YES"<<endl;
        }
        else if(s[n-1]==s[n-2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else{
        
       }
    }
    return 0;
}