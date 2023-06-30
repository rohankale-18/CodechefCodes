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
       int a[3];
       for(int i=0;i<3;i++){
        cin>>a[i];
       }
       sort(a,a+3);
       if(a[0]+a[1]==a[2]){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }

    }
    return 0;
}