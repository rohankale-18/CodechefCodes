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
       int a,b,flag=0;
       for(int num : {x,y,z}){
        int mult = (x*y*z)/num;
        if(mult%num==0){
            flag=1;
            a=mult;
            b=num;
        }
       }
       if(flag){
        cout<<a<<" "<<b<<endl;
       }
       else{
        cout<<-1<<endl;
       }
    }
    return 0;
}