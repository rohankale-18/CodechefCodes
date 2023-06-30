#include <iostream>
#include<strings.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string s;
        cin>>s;
        int count;
        for(int j=0;j<n;j++){
            if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
                count=0;
                // cout<<"YES"<<endl;
                // break;
            }
            else{
                count=count+1;
               if(count>=4){
                break;
               }
            }   
        }
        if(count>=4){
            cout<<"NO"<<endl;
            count=0;
        }
        else{
            cout<<"YES"<<endl;
            count=0;
        }
    }
	return 0;
}