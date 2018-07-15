#include<iostream>
using namespace std;
int main(){
     int n,m,b[1001],a[1001],flag=0;
     long s,sum=0,maximumCost=-5000;
     cin>>s>>n>>m;
     for(int i=0;i<n;i++)
        cin>>a[i];

     for(int i=0;i<m;i++)
        cin>>b[i];

    for(int i=0;i<n;i++){

         for(int j=0;j<m;j++){
            sum=a[i]+b[j];
            if(sum<=s && maximumCost<sum){
                maximumCost=sum;
                flag=1;
            }
         }
    }
    if(flag==1) cout<<maximumCost<<endl;
    else cout<<"-1"<<endl;


   return 0;
}

