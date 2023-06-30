#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int X,Y,A;
        cin>>X;
        cin>>Y;
        cin>>A;
        if(A>=X){
            if(A<Y)
            cout<<"YES"<<endl;
            else{    
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}