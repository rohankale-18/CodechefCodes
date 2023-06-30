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
       int n,q;
       cin>>n>>q;
       int arr[n],a[q],final[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       sort(arr,arr+n);
       vector<pair<int,int>> v,ans;
       for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        v.push_back(make_pair(a,b));
       }
       for(int i=0;i<q;i++){
        ans[i].first=abs(v[i].first - v[i].first);
        ans[i].second=i;
       }
       sort(ans.begin(),ans.end());
       int z=ans[0].second;
       int first=v[z].first;
       int second=v[z].second;  
       int k=1
        for(int i=first;i<=second;i++){
            final[i]=arr[n-k];
            k++;
        }
    }
    return 0;
}