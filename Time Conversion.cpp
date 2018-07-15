#include<iostream>
using namespace std;
int main(){

    string str;
    cin>>str;
    int h1=(int)str[0]-'0';
    int h2=(int)str[1]-'0';
    int hour=(h1*10+h2%10);
    if(str[8]=='A'){
        if(hour==12){
            cout<<"00";
            for(int i=2;i<=7;i++)
                cout<<str[i];
        }
        else{

            for(int i=0;i<=7;i++)
                cout<<str[i];
        }
 cout<<endl;

    }
    else{
        if(hour==12){
            for(int i=0;i<=7;i++)
                cout<<str[i];
        }
        else{
           hour=12+hour;
           cout<<hour;
            for(int i=2;i<=7;i++)
                cout<<str[i];
        }
     cout<<endl;

    }

  return 0;

}
