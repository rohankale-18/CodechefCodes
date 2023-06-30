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
       int x;
       cin>>x;
       if(x>100){
        cout<<x-10<<endl;
       }
       else{
        cout<<x<<endl;
       }
    }
    return 0;
}