#include <iostream>
using namespace std;

int main() {
	int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;

        if(a==b){
            if(b<=c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(b==c){
            if(c<=a){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(c==a){
            if(a<=b){
                cout<<"YES"<<endl;
            }
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
