#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,maximum=-1000;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        if(maximum<a) maximum=a;
    }
    int ans=0;
    if(maximum>k) {
            ans=maximum-k;
            cout<<ans<<endl;
    }
    else cout<<0<<endl;



  return 0;
}
