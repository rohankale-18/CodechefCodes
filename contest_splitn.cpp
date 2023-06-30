#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int dtb[32];

    int j = 0;
    while (n > 0) {
        dtb[j] = n % 2;
        n = n / 2;
        j++;
    }
        
    int count=0;

    for(int x=0;x<j;x++){
        if(dtb[x]==1){
            count++;
        }
    }
    cout<<count-1<<endl;
    }
    return 0;
}
