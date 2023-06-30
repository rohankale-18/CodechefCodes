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
       int n;
       cin>>n;
       if(n<=10){
        cout<<"Lower Double"<<endl;
       }
       else if(n>10 && n<=15){
        cout<<"Lower Single"<<endl;
       }
       else if(n>15 && n<=25){
        cout<<"Upper Double"<<endl;
       }
       else{
        cout<<"Upper Single"<<endl;
       }
    }
    return 0;
}