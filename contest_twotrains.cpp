#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int nostations,mintime=0,diff;
        cin>>nostations;
        int ta[nostations]={0};
        int tb[nostations]={0};
        for(int j=1;j<nostations;j++){
            cin>>ta[j];
            mintime+=ta[j];
            tb[j]=ta[j];
            ta[j]=mintime;
        }
        int k;
        for(k=0;k<nostations-1;k++){
            diff=ta[k+1]-tb[k];
            if(diff>0){
                tb[k+1]=tb[k+1]+tb[k]+diff;
            }
            else{
                tb[k+1]=tb[k+1]+tb[k];
            }
        }
        cout<<tb[k]<<endl;

    }
    return 0;
}