#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){

     long long count=0,i,valley=0,n;
    string str;
     cin>>n>>str;

    for(i=0;i<n;i++){
    if(str[i]=='U') count++;
    if(str[i]=='D') count--;
    if(count==0 && str[i]=='U') valley++;

    }
     cout<<valley<<endl;
   return 0;
}
