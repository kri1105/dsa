#include<iostream>
using namespace std;

int printNums(int n){
    if(n==1){
        cout<< 1;
        return 0;
    }

    cout<<n<<" ";
    return printNums(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    printNums(n);
    return 0;
}