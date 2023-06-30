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
       int a,b,c;
       cin>>a>>b>>c;
       for(int i=2;i<100;i++){
        if(a%i!=0 && b%i!=0 && c%i!=0){
            cout<<i<<endl;
            break;
        }
       }
    }
    return 0;
}