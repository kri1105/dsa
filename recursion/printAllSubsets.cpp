#include<iostream>
#include<vector>
using namespace std;

void printAllSubsets(vector<int> &arr, vector<int> &ans, int i){
    if ( i == arr.size()){
        for(int val : ans){
            cout<<val<<" ";
        }
        cout<< endl;
        return;
    }
        //include the subset in the ans 
        ans.push_back(arr[i]);
        printAllSubsets(arr, ans, i+1);
        //exclude the subset from the ans - backtracking 
        ans.pop_back(); 
        //move to the next index
        printAllSubsets(arr, ans, i+1);
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int> ans; // stores all subsets 

    printAllSubsets(arr, ans, 0);
    return 0;
}