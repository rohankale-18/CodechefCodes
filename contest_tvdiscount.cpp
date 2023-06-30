#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c,d;
        cin>>a;
        cin>>b;
        cin>>c;
        cin>>d;

        if((a-c)>(b-d)){
            cout<<"SECOND"<<endl;
        }
        else if((a-c)<(b-d)){
            cout<<"FIRST"<<endl; 
        }
        else{
            cout<<"ANY"<<endl;
        }
    }
	return 0;
}
