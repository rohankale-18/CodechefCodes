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
       int n=2;
       int A[n];
       for(int i=0;i<n;i++){
        cin>>A[i];
       }
       sort(A,A+n);

       
       int A1[n];
       for(int i=0;i<n;i++){
        cin>>A1[i];
       }
       sort(A1,A1+n);


       int A2[n];
       for(int i=0;i<n;i++){
        cin>>A2[i];
       }
       sort(A2,A2+n);

       if(equal(A, A + n, A1)){
        cout<<"1"<<endl;
       }
       else if(equal(A, A + n, A2)){
        cout<<"2"<<endl;
       }
       else{
        cout<<"0"<<endl;
       }
    }
    return 0;
}