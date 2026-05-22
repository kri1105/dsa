//FACTORIAL OF A NUMBER

#include<iostream>
using namespace std;    

int main(){
    int n = 5;
    int factorial = 1;

    for (int i = 1; i <= n; i++){
        factorial *= i;
    }

    cout<<"The factorial of "<<n<<" is: "<<factorial;

    return 0;
}