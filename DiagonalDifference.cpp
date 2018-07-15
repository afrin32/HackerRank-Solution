#include<iostream>
using namespace std;
int main(){
    int n,i,j,arr[100][100],sum1=0,sum2=0,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                    cin>>arr[i][j];
        }
    }

      i=0;
      j=0;
      while(i!=n && j!=n){
          sum1=sum1+arr[i][j];
           i++;
           j++;
    }

      i=n-1;
      j=0;
      while(i!=-1 && j!=n){
          sum2=sum2+arr[i][j];
           i--;
           j++;
    }

      sum=sum1-sum2;
    if(sum<0) sum=-sum;
     cout<<sum<<endl;
   return 0;


}


