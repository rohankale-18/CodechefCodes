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
      int x,y,k;
      cin>>x>>y>>k;
      int z=abs(x-y);
      if(z%k!=0){
        cout<<(z/k) + 1<<endl;
      } 
      else{
        cout<<z/k<<endl;
      }
    }
    return 0;
}