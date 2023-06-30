    #include<iostream>
    using namespace std;

    int main(){
        int t;
        cin>>t;

        for(int i=0;i<t;i++){
            int n,count=0;
            cin>>n;
            int a[n];
            int COUNT[n];
            for(int j=0;j<n;j++){
                cin>>a[j];
            }

            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(a[j]==a[k]){
                        if(a[j]==a[k-1]){
                            continue;
                        }
                        else{
                            count++;
                        }
                    }
                }
                COUNT[j]=count;
            }
            for(int l=0;l<n;l++){
                cout<<COUNT[l]<<endl;
            }

        //     for(int l = 1;l < n; l++) {
        //         if(COUNT[0] < COUNT[l]){
        //             // int temp;
        //             // temp=COUNT[0];
        //             COUNT[0] = COUNT[l];
        //             // COUNT[l]=temp;
        //         }
        //     }
        // int j;
        //     for(j=1;j<n;j++){
        //             if(COUNT[0]==COUNT[j]){
        //                 // cout<<"NO"<<endl;
        //                 int t=j;
        //                 break;
        //             }
                    
        //     }

        //     if(COUNT[0]==COUNT[t]){
        //         cout<<"NO"<<endl;
        //     }
        //     else if(COUNT[0]==1){
        //         cout<<"NO"<<endl;
        //     }
        //     else{
        //         cout<<"YES"<<endl;
        //         break;
        //     }


        }
        return 0;
    }