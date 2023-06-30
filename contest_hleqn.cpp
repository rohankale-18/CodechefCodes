#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--){
        int n,x,y,j;
        cin>>n>>x>>y;
        int a[n];
        for(j=0;j<n;j++){
            cin>>a[j];
        }
        // while(y--){
        //     for(j=1;j<n;j++){
        //     if(a[0]>a[j]){
        //         int temp=a[j];
        //         a[j]=a[0];
        //         a[0]=temp;
        //     }
        //     }            
        //     a[0]=a[0]^x;
        // }
        sort(a,a+n);
        int temp;
        while(y--){            
            a[0]=a[0]^x;
            temp=a[0];
            sort(a,a+n);
        }

        for(j=0;j<n;j++){
            cout<<a[j]<<" ";
        }  
        cout<<endl;     

    }
	return 0;
}
