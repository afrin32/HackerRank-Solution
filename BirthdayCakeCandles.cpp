#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
 long long int n,num[100000],maxi=-1000000,cnt=0;
    cin>>n;
     for(int i=0;i<n;i++){
        cin>>str;
          num[i]=stoi(str);
        if(num[i]>maxi){
                maxi=num[i];
        }
     }

      for(int i=0;i<n;i++){
       if(num[i]==maxi) cnt++;

     }

     cout<<cnt<<endl;
   return 0;


}




