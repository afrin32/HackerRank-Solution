#include<bits/stdc++.h>
using namespace std;
int main(){
    int V,n,ar[1000];
    cin>>V>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];

      for(int i=0;i<n;i++){
        if(ar[i]==V){
            cout<<i<<endl;
            break;
        }
    }
    return 0;

}
