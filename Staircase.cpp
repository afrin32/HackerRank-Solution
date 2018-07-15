#include<iostream>
using namespace std;
int main(){
    int n,i,j,arr[100][100];
    cin>>n;
      for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                    cout<<" ";
        }
        j=n;
        while(j!=n-i-1){
            cout<<"#";
            j--;
        }
        cout<<endl;
    }

   return 0;
}



