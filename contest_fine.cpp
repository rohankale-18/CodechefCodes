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
     if(x<=70){
        cout<<0<<endl;
     }  
     else if(x>100){
        cout<<2000<<endl;
     }
     else{
        cout<<500<<endl;
     }
    }
    return 0;
}