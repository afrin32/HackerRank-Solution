#include<iostream>
#include<vector>
using namespace std;
int main() {
    int number_of_elements;
    cin >> number_of_elements;
    vector <int> array(number_of_elements);
    for (int i = 0; i < number_of_elements; i++) {
        cin >> array[i];
    }

    long long int maxi,mini,best=0,lowest=0;

        maxi=array[0];

        mini=array[0];


    for (int i =1; i < number_of_elements; i++) {
       if(maxi<array[i]){
            maxi=array[i];
            best++;
       }
       if(mini>array[i]){
        mini=array[i];
        lowest++;
       }
    }
    cout <<best<<" "<<lowest<<endl;
    return 0;
}

