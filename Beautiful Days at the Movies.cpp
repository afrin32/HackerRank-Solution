#include<bits/stdc++.h>
using namespace std;
int main(){
    long long i,j,k,a,b,count=0;
    cin>>i>>j>>k;
    for(a=i;a<=j;a++){
            long long reminder=0,reverse1=0,d=0;
            b=a;
    while(b!=0){
         reminder=b%10;
         reverse1=reverse1*10+reminder;
         b=b/10;
    }
    if(reverse1>=a){
        d=reverse1-a;

        if(d%k==0) count++;
    }
    else{
        d=a-reverse1;

         if(d%k==0) count++;
    }
    }
    cout<<count<<endl;
 return 0;
}
