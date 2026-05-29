//BOOK ALLOCATION PROBLEM 

#include<iostream>
#include<vector>
using namespace std;

int isValid(vector<int> &arr, int n, int m, int maxAllowedPages){
    int student = 1, pages = 0 ;
    for ( int  i = 0; i<n ; i++){ // TC : O(n)
        if ( arr[i] > maxAllowedPages) return false; 

        if( pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }
        else {
            student++;
            pages = arr[i];
        }
    }

    return student > m ? false : true ;

}



int allocateBooks( vector<int> &arr, int n, int m){ //TIME COMPLEXITY: O(Range * log n)
    if(m>n) return -1;

    int sum = 0;
    for(int i = 0;i<n;i++){
        sum +=arr[i];
    }

    int s=0, e = sum; // range of possible answers
    int ans = -1;
    while(s<=e){ // O( log (Range) * isValid funciton TC -> O(Range * log n)
        int mid = s + (e-s)/2;
        if (isValid(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;

        }
    }

    return ans ;
}

int main(){
    vector<int> arr = {2,1,3,4};
    int n = 4, m = 2;
    cout << allocateBooks(arr,n,m)<< endl;
    return 0;
}