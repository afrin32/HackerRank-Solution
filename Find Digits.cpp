#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n,l,reminder,i=0,j;
     cin>>n;
    vector<int> array(n);
   l=n;
    while(l!=0){
       reminder=l%10;
       array[i]=reminder;
       l=l/10;
       i++;
    }
      long count=0;
    for(j=0;j<i;j++){
            if(array[j]==0) count=count;
            else if(n%array[j]==0) count++;
    }
    cout<<count<<endl;
    }
    return 0;

}

