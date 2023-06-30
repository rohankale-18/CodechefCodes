#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int t,x,y;
    cin>>t;
    float z;

    for(int i=0; i<t ; i++){
        cin>>x;
        cin>>y;
    if(x%2==0 && y%2==1){
            if(x>y){
            z = ((x-y+1)/2);
            cout << z <<endl;
            }
            else{
            z=((y-x+1)/2);
            cout << z <<endl;
            }
    }
    else if(x%2==1 && y%2==0){
        if(x>y){
            z= ((x-y+1)/2);
            cout << z <<endl;
        }
        else{
            z=((y-x+1)/2);
            cout << z <<endl;
        }
    }
    else{
            if(x>y){
            z= (x-y)/2;
            cout << z <<endl;
        }
        else{
            z=(y-x)/2;
            cout << z <<endl;
        }
    }
        
        
    }
    return 0;
}