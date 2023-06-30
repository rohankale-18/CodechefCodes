#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 998244353
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int f(int arr[],int i,int j){
    int sum=0;
    for(int a=i;a<j;a++){
        sum=sum+(arr[a])%mod;
    }
    return sum%mod;
}


int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
        int ans=0;
       for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            ans=ans+((((f(&(a[n]),i,j)%mod)*(f(&(a[n]),i,j)%mod))%mod) *(f(&(a[n]),i,j)%mod))%mod;
        }
       }
       cout<<ans%mod<<endl;

    }
    return 0;
}