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
       int n,count=0,k=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[n];
       }
       vector<int> b(n);
       for(int i=0;i<n;i++){
        int j;
        for(j=i;j<n;j++){
            if(a[i]==a[j]){
                break;
            }
        }
            if(i==j){
                cout<< a[i]<<" ";
            }
       }
    //    cout<<b.size()<<endl;
    }
    return 0;
}