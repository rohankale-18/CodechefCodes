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
       string s;
       cin>>n>>s;
       int sa=0, sb=0;
       if(s[0]=='A'){
        sa=1;
       }
       for(int i=1;i<n;i++){
        if(s[i-1]==s[i]){
            if(s[i-1]=='A'){
                sa++;
            }
            else{
                sb++;
            }
        }
       }
       cout<<sa<<" "<<sb<<endl;
    }
    return 0;
}