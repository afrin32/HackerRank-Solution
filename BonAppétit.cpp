#include<bits/stdc++.h>
using namespace std;
int main(){
    long n,i,sum=0,k;
    cin>>n>>k;
    for(i=0;i<n;i++){
           long c;
        cin>>c;
          if(k==i) sum=sum;
          else sum=sum+c;

    }
    long b,ans;
    cin>>b;
    if(b>(sum/2)){
            ans=b-(sum/2);
            cout<<ans<<endl;
    }
    else
        cout<<"Bon Appetit"<<endl;




return 0;
}

