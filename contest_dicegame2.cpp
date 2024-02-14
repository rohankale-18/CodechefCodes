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
       vector<int>a,b;
       for(int i=0;i<3;i++){
        int x;
        cin>>x;
        a.push_back(x);
       }
       for(int i=0;i<3;i++){
        int x;
        cin>>x;
        b.push_back(x);
       }
       sort(a.begin(),a.end());
       sort(b.begin(),b.end());
       if((a[2]+a[1])>(b[2]+b[1])){
        cout<<"Alice"<<endl;
       }
       else if((a[2]+a[1])<(b[2]+b[1])){
        cout<<"Bob"<<endl;
       }
       else{
        cout<<"Tie"<<endl;
       }
    }
    return 0;
}