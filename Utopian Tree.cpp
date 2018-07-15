#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
            int k;
        cin>>k;
        int sum=2;
        if(k==0) cout<<1<<endl;
        else if(k==1) cout<<2<<endl;
     else{

         for(int i=2;i<=k;i++){

            if(i%2==0) sum=(sum+1);
            else if(i%2!=0) sum=sum*2;

         }
        cout<<sum<<endl;
     }


    }
    return 0;
}
