//PAINTER'S PARTITION PROBLEM

#include<iostream>
#include<vector>
using namespace std;

int isPossible(vector<int> &arr, int n, int m, int maxAllowedTime){
    int painter = 1, time = 0 ;
    for ( int  i = 0; i<n ; i++){ // TC : O(n)
        if ( arr[i] > maxAllowedTime) return false; 

        if( time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else {
            painter++;
            time = arr[i];
        }
    }

    return painter > m ? false : true ;

}



int minTimeToPaint( vector<int> &arr, int n, int m){ //TIME COMPLEXITY: O(Range * log n)
    if(m>n) return -1;

    int sum = 0;
    for(int i = 0;i<n;i++){
        sum +=arr[i];
    }

    int s=0, e = sum; // range of possible time
    int ans = -1;
    while(s<=e){ // O( log (Range) * isValid funciton TC -> O(Range * log n)
        int mid = s + (e-s)/2;
        if (isPossible(arr, n, m, mid)){
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
    cout << minTimeToPaint(arr,n,m)<< endl;
    return 0;
}