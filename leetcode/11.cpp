//LEETCODE 11 - CONTAINER WITH MOST WATER 
/*

You are given an integer array height of length n. There are n vertical lines 
drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the 
container contains the most water. Return the maximum amount of water a 
container can store.

*/

#include<iostream>
#include<vector>
using namespace std;

int maxArea(vector<int>& height) {
    //METHOD 1 : BRUTE FORCE METHOD  
    //WILL GIVE TLE - BECAUSE OF TIME COMPLEXITY O(n2)
    // int maxWater = 0;
    // for(int i =0;i<height.size();i++){
    //     for(int j= i+1;j<height.size();j++){
    //         int width = j - i; 
    //         int ht = min(height[i], height[j]);
    //         int currWater = width * ht;
    //         maxWater = max(currWater, maxWater);
    //     }
    // }
    // return maxWater;

    // METHOD 2 : OPTIMAL METHOD - TWO POINTER APPROCH
    // TWO POINER APPROCH
    int left = 0;
    int right = height.size() - 1;
    int maxWater = 0;
    while(left<right){
        int width = right - left;
        int ht = min(height[left], height[right]);
        int currWater = width * ht;
        maxWater = max(maxWater, currWater);
        height[left] < height[right] ? left ++ : right -- ;
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};
    cout<<"Max water :"<< maxArea<< endl;
    return 0;
}



