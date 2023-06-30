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
       int a,b,c,d;
       cin>>a>>b>>c>>d;
       set<int> s;
       for(int i=a;i<=b;i++){
        s.insert(i);
       }
       for(int i=c;i<=d;i++){
        s.insert(i);
       }
       cout<<s.size()<<endl;
    }
    return 0;
}