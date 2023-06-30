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
       int x,y,z;
       cin>>x>>y>>z;
       if(x<y){
        if(x<z){
            cout<<"ALICE"<<endl;
        }
        else{
            cout<<"CHARLIE"<<endl;
        }
       }
       else{
        if(y<z){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"CHARLIE"<<endl;
        }
       }
    }
    return 0;
}