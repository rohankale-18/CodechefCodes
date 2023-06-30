#include<bits/stdc++.h>
#include<cmath>
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
       int n,k,x,count=0;
       cin>>n>>k;
       while(n>=k){
        x=log2(n)/log2(k);
        n=n-pow(k,x);
        count++;
       }
       if(n<k){
        if(n%2==1){
            count++;
        }
       }
       if(count%2!=0){
        cout<<"Shivansh"<<endl;
       }
       else{
        cout<<"Tina"<<endl;
       }
    }
    return 0;
}