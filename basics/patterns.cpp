// PATTERN PRINTING

// ***
// ***
// ***
// ***
// ***

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int numofstars = 3;
//     for ( int i = 1;i<= n;i++){
//         for ( int j = 1; j<= numofstars;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;

// }


// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
    
//     for( int i = 1; i<n ; i++){
//         for ( int j = 1; j<=n; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }


// * * * * * 
// * * * * * 
// * * * * * 
// * * * * * 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
    
//     for( int i = 1; i<n ; i++){
//         for ( int j = 1; j<=n; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
    
//     for( int i = 1; i<n ; i++){
//         char ch = 'A';
//         for ( int j = 1; j<=n; j++){
//             cout<<ch++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1 2 3 
// 4 5 6 
// 7 8 9 

// #include <iostream>
// using namespace std;

// int main(){
//     int n =  3;
//     int num = 1;
//     for( int i =0;i<n;i++){
//         for( int j = 0; j<n; j++){
//             cout<<num++<<" ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// A B C 
// D E F 
// G H I 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     char ch = 'A';

//     for(int i = 0 ; i< n;i++){
//         for ( int j =0;j<n;j++){
//             cout<<ch++<<" ";
//         }
//         cout<<endl;
//     }
// }


// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i+1; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;

//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i+1; j++){
//             cout<< i+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     char ch = 'A';
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < i+1; j++){
//             cout<< ch<<" ";
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 5;
    
//     for(int i = 0; i<n;i++){
//         for( int j=0; j<i ;j++){
//             cout<< j+1<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
    
//     for( int i = 0; i<n ; i++){
//         for( int j = i+1; j>0 ; j--){
//             cout<< j<<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// this triangle is called Floyd's triangle

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     int num = 1;
//     for( int i = 0; i<n ; i++){
//         for( int j = 0; j<i+1; j++){
//             cout<< num++ <<" ";
//         }
//         cout<<endl;
//     }


//     return 0;
// }

// A 
// B C 
// D E F 
// G H I J 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for( int i = 0; i<n ; i++){
//         for( int j = i+1; j>0 ; j--){
//             cout<< ch++<<" ";
//         }
        
//         cout<<endl;
//     }
// }

// A 
// B A 
// C B A 
// D C B A 

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     for( int i = 0; i<n ; i++){
//         char ch = 'A' + i;
//         for( int j = i+1; j>0 ; j--){
//             cout<< ch--<<" ";
//         }
//         cout<<endl;
//     }
// }

// 1111
//  222
//   33
//    4

// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
    
//     for( int i =0;i<n;i++){
//         for( int j = 0; j<i; j++){
//             cout<< " ";
//         }
//         for( int k = 0; k<n-i;k++){
//             cout<< i+1;
//         }

//         cout<<endl;
//     }

//     return 0;
// }

// AAAA
//  BBB
//   CC
//    D


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
//     char ch = 'A';
//     for( int i =0;i<n;i++){
//         for( int j = 0; j<i; j++){
//             cout<< " ";
//         }
//         for( int k = 0; k<n-i;k++){
//             cout<< ch;
//         }
//         ch++;
//         cout<<endl;
//     }
//     return 0;
// }


// ___1___ - three spaces and one 1
// __121__ - two spaces and 1 2 | 1
// _12321_ - one space and 1 2 3 | 2 1 
// 1234321 - no spaces and 1 2 3 4 | 3 2 1 
// ( spliting the pattern into 3 parts - spaces, 1st set of numbers and 2nd set of numbers)


// #include<iostream>
// using namespace std;

// int main(){
//     int n = 4;
    
//     for( int i =0;i<n;i++){ 
//         //spaces loop
//         for( int j = 0; j<n-i-1; j++){
//             cout<< " ";
//         }
//         // 1st set of numbers 
//         for( int k = 1; k<=i+1;k++){
//             cout<< k;
//         }
//         // 2nd set of numbers
//         for( int l = i; l>0; l--){
//             cout<< l;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
   

// #include<iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for( int i = 0; i<n ; i++ ){
//         //top part 
//         //    *     
//         //   * *
//         //  *   *
//         // *     *
//         // outer space + * +  inner space  + * (if i!=0)
//         //1.outer space + star in the end loop 
//         for( int j = 0; j< n-i-1 ; j++){
//             cout<< " ";
//         } 
//         cout << "*";
//         //2. inner space loop
//         if ( i != 0 ){
//             //spaces 
//             for ( int k = 0; k<2*i-1; k++){
//             cout<< " ";
//             }
//             // star
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//         // second part of the hollow triangle 
//     for( int i = 0; i<n-1; i++){
//         //spaces 
//         for( int j = 0; j<i+1; j++){
//             cout<<" ";
//         }
//         cout<<"*"; 
//         if ( i != n-2){                // spaces 
//             for( int k = 0; k< 2*(n-i)-5; k++){
//                 cout<<" ";
//             }
//             cout << "*"; 
//         }
//         cout<<endl;
//     }
//     return 0;
// }