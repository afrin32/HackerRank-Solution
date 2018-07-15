#include<iostream>
using namespace std;
int main(){

    int n,k,arra[150];
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>arra[i];

        int d,m,sum=0,count=0;


    for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum=arra[i]+arra[j];
                if(sum%k==0) count++;
            }
    }


      cout<<count<<endl;


return 0;
}
