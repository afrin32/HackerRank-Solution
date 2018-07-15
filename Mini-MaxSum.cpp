#include <bits/stdc++.h>
using namespace std;
int main() {

        long long int a,b,c,d,e,maxi=-1000000000,mini=1000000000000,ans1,ans2,ans3,ans4,ans5;
            cin>>a>>b>>c>>d>>e;
            ans1=a+b+c+d;
            ans2=a+b+d+e;
            ans3=a+b+c+e;
            ans4=a+c+d+e;
            ans5=b+c+d+e;
            if(ans1>maxi) maxi=ans1;
            if(ans2>maxi) maxi=ans2;
            if(ans3>maxi) maxi=ans3;
            if(ans4>maxi) maxi=ans4;
            if(ans5>maxi) maxi=ans5;

            if(ans1<mini) mini=ans1;
            if(ans2<mini) mini=ans2;
            if(ans3<mini) mini=ans3;
            if(ans4<mini) mini=ans4;
            if(ans5<mini) mini=ans5;

      cout<<mini<<" "<<maxi<<endl;




    return 0;
}

