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
       if(x>=7)
        cout<<"HEAVY"<<endl;
       else if(x<3)
        cout<<"LIGHT"<<endl;
       else
        cout<<"MODERATE"<<endl;  
    }
    return 0;
}