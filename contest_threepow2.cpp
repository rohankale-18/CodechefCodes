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
       int n,count=0;
       string s;
       cin>>n>>s;
       if(n<2){
        cout<<"NO"<<endl;
       }
       else if(n==2 && s[0]=='1' && s[1]=='0'){
        cout<<"NO"<<endl;
       }
       else{
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count++;
            }
        }
        if(count<=3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }
    }
    return 0;
}