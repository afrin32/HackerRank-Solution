#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n,k,j=0,i,ans=100;
    cin>>n>>k;
    vector<int> array(n);
     for(i=0;i<n;i++)
        cin>>array[i];
        int l;
        l=n;
        if(array[0]==1) ans=ans-2;

     while(l!=0){
        i=j;
        j=(i+k)%n;
        if((i+k)>=n){
                ans=ans-1;
        break;
        }
       else if(array[j]==1) ans=ans-3;
        else ans=ans-1;
        l--;
    }

    cout<<ans<<endl;
    return 0;

}
