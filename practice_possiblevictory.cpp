#include <iostream>
using namespace std;

int main() {
	int r,o,c;
    cin>>r>>o>>c;
    o=36*(20-o);
    c=c+o;
    if(c>r){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

	return 0;
}
