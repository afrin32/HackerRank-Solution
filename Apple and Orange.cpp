
#include<iostream>
using namespace std;
int main(){
    long long int s,t,a,b,m,n,d,e=0,sum1=0,sum2=0;
     cin>>s>>t>>a>>b>>m>>n;
     while(m--){
        cin>>d;
        e=a+d;
        if(s<=e && e<=t) sum1++;
     }
     while(n--){
         cin>>d;
        e=b+d;
        if(s<=e && e<=t) sum2++;

     }
    cout<<sum1<<"\n"<<sum2<<endl;

    return 0;

}
