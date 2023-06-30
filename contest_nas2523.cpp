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
       if(n%2!=0){
        cout<<-1<<endl;
       }
       else{
        for(int i=n;i>=1;i--){
            cout<<i<<" ";
        }
        cout<<endl;
       }
    }
    return 0;
}