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
       for(int i=0;i<n;i++){
        if(i==0 || i==n-1){
            cout<<"1";
        }
        else{
            cout<<"0";
        }
       }
       cout<<endl;
    }
    return 0;
}