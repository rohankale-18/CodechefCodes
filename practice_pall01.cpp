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
        int flag=0;
       string n;
       cin>>n;
       int m=n.size();
       for(int i=0;i<m;i++){
        if(n[i]!=n[m-i-1]){
            flag=1;
            break;
        }
        else{
            flag=0;
        }
       }
       if(flag==0){
        cout<<"wins"<<endl;
       }
       else{
        cout<<"loses"<<endl;
       }

    }
    return 0;
}