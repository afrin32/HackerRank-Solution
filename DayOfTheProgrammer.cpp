#include<iostream>
using namespace std;
int main(){

    int n,flag=0;
    cin>>n;
    if(n>=1700 && n<=1917){
        if(n%4==0) cout<<"12.09."<<n<<endl;
        else  cout<<"13.09."<<n<<endl;
    }
   else  if(n==1918){
        cout<<"26.09.1918"<<endl;
     }
    else{
            if(n%400==0) cout<<"12.09."<<n<<endl;
          else if(n%4==0){
                if(n%100!=0) cout<<"12.09."<<n<<endl;
                else cout<<"13.09."<<n<<endl;
      }
    else
        cout<<"13.09."<<n<<endl;
    }

return 0;
}
