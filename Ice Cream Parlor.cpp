#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){

   int t;
    cin>>t;
    while(t--){
       long m,n,sId=0,lId=0;
    cin>>m>>n;
    vector<int> array(n);
    for(int i=0;i<n;i++)
        cin>>array[i];
     int flag=0,sum=0;
  for(int i=0;i<n-1;i++){

        for(int j=i+1;j<n;j++){
    sum=array[i]+array[j];
    if(m==sum){
        sId=i+1;
        lId=j+1;
        flag=1;
        break;
    }
  }
  if(flag==1) break;
  }

    cout<<sId<<" "<<lId<<endl;

    }

   return 0;
}

