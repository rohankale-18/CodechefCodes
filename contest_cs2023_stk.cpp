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
       int n,count=0,ans=0;
       cin>>n;
       vector <int> a;
       vector<int> b;
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
       }
       for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back(x);
       }
       for(int i=0;i<n;i++){
        if(a[i]>0){
            ans++;
        }
        else{
            count=max(count,ans);
            ans=0;
        }
       }
       if(ans>0){
        count=max(count,ans);
       }
       int aans=count;
       count=0,ans=0;
       for(int i=0;i<n;i++){
        if(b[i]>0){
            ans++;
        }
        else{
            count=max(count,ans);
            ans=0;
        }
       }
       if(ans>0){
        count=max(count,ans);
       }
       int bans=count;
       if(aans>bans){
        cout<<"OM"<<endl;
       }else if(aans<bans){
        cout<<"ADDY"<<endl;
       }else{
        cout<<"DRAW"<<endl;
       }
    }
    return 0;
}