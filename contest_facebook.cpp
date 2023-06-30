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
       int n,count=0,maximum=0;
       vector< pair<int,int>> vect;
       cin>>n;
       int a[n],b[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       for(int i=0;i<n;i++){
        cin>>b[i];
       }
       int max;
       max=*max_element(a,a+n);
       int i;
       for(i=0;i<n;i++){
        if(max==a[i]){
            vect.push_back(make_pair(b[i],i));
        }
       }
       if(vect.size()==1){
        cout<<vect[0].second+1<<endl;
       }
       else{
        sort(vect.begin(),vect.end());
        max=vect[vect.size()-1].second+1;
        cout<<max<<endl;
       }
    }
    return 0;
}