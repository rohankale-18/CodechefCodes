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
       int a,b,x;
       cin>>a>>b>>x;
       if(a==b){
        cout<<"YES"<<endl;
       }
       while(a!=b){
        if(b>a){
            a=a+x;
            b=b-x;
            if(a==b){
                cout<<"YES"<<endl;
                break;
            }
            else if(b<a){
                cout<<"NO"<<endl;
                break;
            }
            else{
                continue;
            }
        }
        else{
            b=b+x;
            a=a-x;
            if(a==b){
                cout<<"YES"<<endl;
                break;
            }
            else if(b>a){
                cout<<"NO"<<endl;
                break;
            }
            else{
                continue;
            }
        }
       }
       
    }
    return 0;
}