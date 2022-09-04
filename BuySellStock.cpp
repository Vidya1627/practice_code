#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int min_value = INT_MAX;
    int maximum_profit = 0;
    int n = prices.size();
    for(int i = 0; i < n; i++) {
        if(prices[i] < min_value) {
            min_value = prices[i];
        }
        maximum_profit = max(prices[i] - min_value, maximum_profit);
    }
    return maximum_profit;
}
