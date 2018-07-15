#include<iostream>
using namespace std;
int main(){
    int n,i,aArr[1000],bArr[1000],sum1=0,sum2=0;

    for(i=0;i<3;i++)
        cin>>aArr[i];
        for(i=0;i<3;i++)
        cin>>bArr[i];
      for(i=0;i<3;i++){
        if(aArr[i]>bArr[i]) sum1++;
        if(aArr[i]<bArr[i]) sum2++;
      }
     cout<<sum1<<" "<<sum2<<endl;



}

