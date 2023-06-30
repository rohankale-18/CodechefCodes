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
       cin>>n;
       int a[2*n];
       vector <int> v;
       for(int i=0;i<2*n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        if(a[i]>n){
            count++;
            v.push_back(n-i-1);
        }
       } 
       for(int i=n;i<2*n;i++){
        if(a[i]<=n){
            v.push_back(i-n);
        }
       }
       int sum=0;
       sum=accumulate(v.begin(),v.end(),sum);
       cout<<sum+count<<endl;       
    }
    return 0;
}