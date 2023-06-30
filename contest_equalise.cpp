#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;

        if(a<b){
            while(a<b){
                a=a*2;
            }
        }
        else{
            while(b<a){
                b=b*2;
            }
        }

        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}