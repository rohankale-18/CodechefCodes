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
       int n,sum=0,k=0;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       sort(a,a+n);
       for(int j=0;j<n;j++){
        if(a[j]>j+1){
            k=-1;
        }
        else{
            sum+=j+1-a[j];
        }
       }
       if(k==-1){
        cout<<-1<<endl;
       }       
       else{
        cout<<sum<<endl;
       }
       
    }
    return 0;
}