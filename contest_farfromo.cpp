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
       int a,b,c,d;
       cin>>a>>b>>c>>d;
        int d1,d2;
        d1=a*a+b*b;
        d2=c*c+d*d;
        if(d1==d2){
            cout<<"EQUAL"<<endl;
        }
        else if(d1>d2){
            cout<<"ALEX"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }
    }
    return 0;
}