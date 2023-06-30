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
       int Y=0;
       int C=0;
       int M=0;
       cin>>x>>y>>z;
       int count=0;
       if(x!=0){
        count++;
        }
       if(y!=0){
        count++;
        }
       if(z!=0){
        count++;
        }
       for(int i=0;i<count;i++){
        if(x>1 && y>1){
            x--;
            y--;
            Y++;
        }
        else if(x>1 && z>1){
            x--;
            z--;
            M++;
        }
        else{
            z--;
            y--;
            C++;
        }
       }
       int ans=0;
       if(x>0){
        ans++;
       }
       if(y>0){
        ans++;
       }
       if(z>0){
        ans++;
       }
       if(Y>0){
        ans++;
       }
       if(C>0){
        ans++;
       }
       if(M>0){
        ans++;
       }
       cout<<ans<<endl;

    }
    return 0;
}