#include<iostream>
using namespace std;
int main()
{

    long n,p,count1=0,count2=0,i,j;
    cin>>n>>p;
    if(p==n || p==1) cout<<0<<endl;

    else
    {
        i=1;
        while(i<n+1)
        {
          i=i+2;
            count1++;

            if(p==i || p==(i-1)) break;

        }


        if(n%2!=0)
        {

            if(p==n-1){
        count2=0;
            }


            else
            {
                i=1;
                j=n-1;
                while(i<n+1)
                {   i++;
                    j=j-2;
                    count2++;
                    if(p==j || p==(j+1)) break;
                }

            }
        }
      else if(n%2==0)
        {
            i=1;
            j=n;
            while(i<n+1)
            {
                i++;
                j=j-2;
                count2++;
                if(p==j || p==(j+1)) break;
            }

        }

        if(count1>count2) cout<<count2<<endl;
        else if(count1<count2) cout<<count1<<endl;
        else cout<<count1<<endl;
    }

    return 0;
}
