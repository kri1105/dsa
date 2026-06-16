#include<iostream>
#include<vector>
using namespace std;

int printAllSubsets(vector<int> &arr, vector<int> &ans, int i){
    if ( i == arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<< endl;
        

    }
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans; // stores all subsets 

    printAllSubsets(arr, ans, 0);
    return 0;
}