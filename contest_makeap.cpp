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
    int a,b;
    cin>>a>>b;
    if(a%2==0 && b%2==0){
        cout<<(a+b)/2<<endl;
    }
    else if(a%2==1 && b%2==1){
        cout<<(a+b)/2<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    }
    return 0;
}   