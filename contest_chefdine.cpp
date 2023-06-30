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
       int n,k,sum=0;
       cin>>n>>k;
       pair<int,int> food[n];
       for(int i=0;i<n;i++){
        cin>>food[i].second;
       }
       for(int i=0;i<n;i++){
        cin>>food[i].first;
       }
       sort(food,food+n);
       for(int i=0;i<k;i++){
        sum=sum+food[i].first;
       }
       if(sum>=k){
        cout<<sum<<endl;
       }
       else{
        cout<<-1<<endl;
       }
    }
    return 0;
}