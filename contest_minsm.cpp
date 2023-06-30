#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
#define endl "\n"
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

// int gcd(int a, int b)
// {
//     int answer = min(a, b);
//     while (answer > 0) {
//         if (a % answer == 0 && b % answer == 0) {
//             break;
//         }
//         answer--;
//     }
//     return answer;
// }

int32_t main(){
    fio;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }    
       sort(a,a+n);
       int j=n;
       while(j>0){
        if(a[j-1]==a[j-2]){
            j--;
            continue;
        }
        else{
            j--;
            break;
        }
       }
       a[n-1]=__gcd(a[n-1],a[j-1]);
    //    cout<<a[n-1]<<endl;
    int sum=0;
       for(int k=0;k<n;k++){
        sum=sum+a[k];
       }
       cout<<sum<<endl;
    }
    return 0;
}