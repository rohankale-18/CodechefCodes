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
       int x,y;
       cin>>x>>y;
       if(x>y)
       cout<<"LOSS"<<endl;
       else if(x<y)
       cout<<"PROFIT"<<endl;
       else
       cout<<"NEUTRAL"<<endl;
    }
    return 0;
}