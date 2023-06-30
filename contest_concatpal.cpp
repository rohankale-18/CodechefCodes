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
       int n,m;
       string a,b;
       cin>>n>>m>>a>>b;
       set<char> s;
       vector<int> v;
       string k;
       k=a+b;
       for(int i=0;i<n+m;i++){
        s.insert(k[i]);
       }
       for(auto itr:s){
        int count=0;
        for(int i=0;i<n+m;i++){
            if(k[i]==itr){
                count++;
            }
        }   
        if(count%2==1){
            v.push_back(count);
        }
       }
       if(v.size()>1){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }
    }
    return 0;
}