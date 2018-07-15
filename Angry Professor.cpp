#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int N,K,nCount=0;
        cin>>N>>K;
        vector<int> array(N);
        for(int j=0;j<N;j++){
            cin>>array[j];
            if(array[j]<=0) nCount++;

        }
        if(nCount>=K) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }



  return 0;
}
