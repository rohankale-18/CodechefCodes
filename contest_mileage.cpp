#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    for(int i=0;i<T;i++){
        float N,X,Y,A,B;
        cin>>N;
        cin>>X;
        cin>>Y;
        cin>>A;
        cin>>B;

        if(((X*N)/A)<((Y*N)/B)){
            cout<<"PETROL"<<endl;
        }
        else if(((X*N)/A)>((Y*N)/B)){
            cout<<"DIESEL"<<endl;
        }
        else{
            cout<<"ANY"<<endl;
        }
    }
    return 0;
}