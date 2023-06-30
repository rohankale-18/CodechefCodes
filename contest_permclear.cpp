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
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       int k;
       cin>>k;
       int b[k];
       for(int i=0;i<k;i++){
        cin>>b[k];
       }
       int temp[n];
       int pos=0;
       int j;
       for(int i=0;i<n;i++){
        for(j=0;j<k;j++){
            if(a[i]==b[j]){
                break;
            }
        }
        if(a[i]==b[j]){
            a[i]=0;
        }

       }
       for(int q=0;q<n;q++){
        cout<<a[q]<<" ";
       }
    //    for(int m=0;m<n;m++){
    //     if(a[m]!=0){
    //         temp[pos]=a[m];
    //         pos++;
    //     }
    //    }
    //    for(int q=0;q<pos-1;q++){
    //     cout<<temp[q]<<" ";
    //    }
       cout<<endl;
    }
    return 0;
}