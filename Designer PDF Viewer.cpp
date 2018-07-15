#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=26,array[50],array1[50];
    char str1[50];
    for(int i=0;i<t;i++)
         cin>>array[i];

    int j=0;
 for(char c='a';c<='z';++c){
         str1[j]=c;
          j++;

    }
    char str[50];
    cin>>str;
    int l;
    l=strlen(str);
    for(int k=0;k<l;k++)
            for(int i=0;i<t;i++)
          if(str1[i]==str[k])
                array1[k]=array[i];



    int h=0;
      for(int k=0;k<l;k++)
        if(array1[k]>h) h=array1[k];
      int ans;
  ans=h*l;
  cout<<ans<<endl;


}
