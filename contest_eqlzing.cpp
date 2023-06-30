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
       int a,b;
       cin>>a>>b;
       if((a+b)%2==0){
        cout<<"Yes"<<endl;
       }
       else{
        cout<<"No"<<endl;
       }
    }
    return 0;
}