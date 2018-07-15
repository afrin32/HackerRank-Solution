#include<iostream>
using namespace std;
int main(){

    int n,arra[150];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arra[i];
        int d,m,sum=0,cnt=0;
        cin>>d>>m;


    for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<m+i;j++){
                sum=sum+arra[j];
            }
            if(sum==d) cnt++;


    }


      cout<<cnt<<endl;


return 0;
}
