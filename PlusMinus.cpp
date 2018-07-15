#include <bits/stdc++.h>
using namespace std;
int main(){
   float positive=0,negative=0,zero=0;
   int arr[1000],n,i;
  float positiveNum,negativeNum,zeroNum;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

      for(i=0;i<n;i++){
        if(arr[i]>0) positive++;
      else if(arr[i]<0) negative++;
       else zero++;
      }


      positiveNum=positive/n;
    negativeNum=negative/n;
     zeroNum=zero/n;
     cout<<fixed<<setprecision(6)<<positiveNum<<"\n";
     cout<<fixed<<setprecision(6)<<negativeNum<<"\n";
     cout<<fixed<<setprecision(6)<<zeroNum<<endl;

  return 0;

}
