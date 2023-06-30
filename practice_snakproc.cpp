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
     int l,flag=0;
     cin>>l;
     string s;
     cin>>s;
     int head=0,tail=0,dot=0;
     for(int i=0;i<l;i++){
        if(s[i]=='H'){
            head++;
        }
        else if(s[i]=='T'){
            tail++;
        }
        else{            
            dot++;
        }
        // cout<<head <<" "<< tail<<endl;
        if(tail>head){
            flag=1;
            break;
        }
        if(head!=1 && head==tail+1){
            flag=1;
            break;
        }
        if(head==1 && tail==1){
            head=0;
            tail=0;
        }
     } 
     if(flag==1){
        cout<<"Invalid"<<endl;
     }  
     else if(head==1 && tail==0){
        cout<<"Invalid"<<endl;
     } 
     else{
        cout<<"Valid"<<endl;
     }
    }
    return 0;
}       