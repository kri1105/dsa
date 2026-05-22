// PLAYING WITH ODD AND EVENNUMBERS 

#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int oddsum = 0;
    for (int i = 1; i <= n; i++){
        if(i % 2 != 0){
            cout<<i<<" ";
            oddsum += i;
        }
    }
    cout<<"\nThe sum of odd numbers is: "<<oddsum;

    int evesum = 0;
    int i = 1;
    int n = 10;

    while(i<=n){
        if( i%2 == 0){
            cout<<i<<" ";
            evesum += i;
        }
        i++;
    }

    cout<<"\nThe sum of even numbers is: "<<evesum;

    return 0;
}
