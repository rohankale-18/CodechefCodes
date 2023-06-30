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
       int n,x;
       cin>>n>>x;
       if(x==1){
        for(int i=0;i<n;i++){
            cout<<'*'<<endl;
        }
       }
       else if(x>n+1 || x<-x+1){
        cout<<-1<<endl;
       }
       else if(x<n){
        for(int i=0;i<n;i++){
            if(i<=n-x){
                cout<<'*'<<endl;
            }
            else{
                cout<<'+'<<endl;
            }
        }
       }
    }
    return 0;
}