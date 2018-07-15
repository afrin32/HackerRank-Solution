#include<iostream>
using namespace std;
int main(){
     int q;
     cin>>q;
     for(int i=0;i<q;i++){
        int x,y,z,a=0,b=0;
        cin>>x>>y>>z;
        a=x-z;
        b=y-z;
        if(a<0)
            a=-a;
       if(b<0)
            b=-b;
        if(a > b) cout<<"Cat B"<<endl;
         if(a < b) cout<<"Cat A"<<endl;
        if(a==b) cout<<"Mouse C"<<endl;
     }



   return 0;
}


