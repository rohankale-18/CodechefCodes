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
       int x,y,ans;
       cin>>x>>y;
       if(x%2==0){
        ans=0;
        while(x<y){
            ans++;
            x+=2;
        }
        cout<<ans<<endl;
       }
       else if(x%3==0){
        x=x+3;
        ans=1;
        while(x<y){
            ans++;
            x+=2;
        }
        cout<<ans<<endl;
       }
       else if(x%5==0){
        x=x+5;
        ans=1;
        while(x<y){
            ans++;
            x+=2;
        }
        cout<<ans<<endl;
       }
       else{
        x=x+7;
        ans=1;
        while(x<y){
            ans++;
            x+=2;
        }
        cout<<ans<<endl;;
       }
    }
    return 0;
}