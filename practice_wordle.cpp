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
       string s,t;
       cin>>s>>t;
       for(int i=0;i<s.size();i++){
        if(s[i]==t[i]){
            cout<<"G";
        }
        else{
            cout<<"B";
        }
       }
       cout<<endl;
    }
    return 0;
}