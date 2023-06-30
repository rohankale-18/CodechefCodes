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
       if(x==y && y==z && z==x){
        if(x>1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
       else if(x==y && x!=1){
        if(z==x-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       }
       else if(z==y && y!=1){
        if(x==y-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       }
       else if(x==z && z!=1){
        if(y==x-1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       }
       else{
        if(x==1 && y==1){
            cout<<"NO"<<endl;
        }
        else if(y==1 && z==1){
            cout<<"NO"<<endl;
        }
        else if(x==1 && z==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
       }
    }
    return 0;
}