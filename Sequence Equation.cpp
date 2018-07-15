#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    int array[100],array1[100],array2[100];
    int j=0;
    for(int i=1; i<=t; i++)
        cin>>array[i];


    for(int i=1; i<=t; i++)
        for(int j=1; j<=t; j++)
            if(i==array[j])
                array1[i]=j;



    for(int i=1; i<=t; i++)
        for(int j=1; j<=t; j++)
            if(array1[i]==array[j])
                array2[i]=j;



    for(int i=1; i<=t; i++)
        cout<<array2[i]<<endl;

    return 0;
}
