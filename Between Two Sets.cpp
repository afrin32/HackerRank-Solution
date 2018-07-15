
#include<iostream>
using namespace std;
int main(){
    int n,m;
    int arra[150],barra[150],cnt=0,mini1=1000,maxi1=-1000,mini2=1000,maxi2=-1000,mini=0,maxi=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>arra[i];
    for(int j=0;j<m;j++)
        cin>>barra[j];
    for(int i=0;i<n;i++){
        if(mini1>arra[i]) mini1=arra[i];
    }
     for(int i=0;i<m;i++){
        if(mini2>barra[i]) mini2=barra[i];
    }
if(mini1<mini2) mini=mini1;
else mini=mini2;
  for(int i=0;i<m;i++){
        if(maxi1<arra[i]) maxi1=arra[i];
    }
     for(int i=0;i<m;i++){
        if(maxi2<barra[i]) maxi2=barra[i];
    }
if(maxi1>maxi2) maxi=maxi1;
else maxi=maxi2;

     for(int k=mini;k<=maxi;k++){
            int flag=0,flag1=0;
        for(int i=0;i<n;i++){
            if(k%arra[i]==0) flag=0;
            else{
                flag=1;
                break;
            }

        }
        if(flag==0){

            for(int j=0;j<m;j++){
                if(barra[j]%k==0) flag1=0;
                else{

                    flag1=1;
                    break;

                }

            }
            if(flag1==0) cnt++;
        }


     }

     cout<<cnt<<endl;

 return 0;

}
