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
       int n;   
       cin>>n;
       int a[n];
       int b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       string v;
       cin>>v;
       int fail,k=0;
       for(int j=0;j<v.length();j++){
        if(v[j]=='0'){
            fail++;
            b[k]=a[j];
            k++;
        }
       }
       int min=*min_element(b,b+k);
       cout<<min<<endl;

    }
    return 0;
}