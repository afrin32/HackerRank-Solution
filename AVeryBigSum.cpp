#include<iostream>
#include<string>
using namespace std;
int main(){
    int n,i;

    string str;
    cin>>n;
    cout<<9/2;
  long long int num,sum=0;
    for(i=0;i<n;i++){
        cin>>str;
       num=stoi(str);
        sum=sum+num;
    }
     cout<<sum<<endl;
   return 0;


}

