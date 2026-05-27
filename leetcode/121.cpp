/*Maxium Profit - You are given an array prices where 
prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single 
day to buy one stock and choosing a different day in 
the future to sell that stock. Return the maximum profit
you can achieve from this transaction. If you cannot 
achieve any profit, return 0.
*/

#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int buy = prices[0]; // assume we buy the stock in the first day
    int profit = 0; // set profit to 0 
    for (int i = 1; i < prices.size(); i++){
        if (prices[i] < buy){ // if the current day's price is less than the best buy so far
            buy = prices[i]; // update the current day as the best day to buy the stock
        } 
        else if (prices[i] - buy > profit){//if the difference between the current price and the price the day you bought it is more than the profit 
            profit = prices[i] - buy; // update the profit
        }
    }
    return profit;
}

int main(){
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = maxProfit(prices);
    cout << "Profit : " << profit << endl;
    return 0;
}