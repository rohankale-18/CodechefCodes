#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

int32_t main(){
    
       int a,b,x,y;
       cin>>a>>b>>x>>y;
       if((2*a+b)>(2*x+y)){
        cout<<"Messi"<<endl;
       }
       else if((2*a+b)<(2*x+y)){
        cout<<"Ronaldo"<<endl;
       }
       else{
        cout<<"Equal"<<endl;
       }
    
    return 0;
}