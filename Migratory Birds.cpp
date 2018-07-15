#include<bits/stdc++.h>
using namespace std;
int main(){

    long n,i;
    cin>>n;
     long c1=0,c2=0,c3=0,c4=0,c5=0;
    for(i=0;i<n;i++){
            int k;
        cin>>k;
          if(k==1) c1++;
         else if(k==2) c2++;
         else if(k==3) c3++;
         else if(k==4) c4++;
         else if(k==5) c5++;
    }
    long a,b;
    a=c5;
    b=5;
    if(a<=c4){
        a=c4;
        b=4;
    }
    if(a<=c3){
        a=c3;
        b=3;
    }
    if(a<=c2){
        a=c2;
        b=2;
    }
    if(a<=c1){
        a=c1;
        b=1;
    }
   cout<<b<<endl;


return 0;
}
