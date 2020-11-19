//Best Time to Buy and Sell Stock
//DP

class Solution {
public:

    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cost = 0;
        int maxCost = 0;
 
        if (n == 0) {
            return 0;
        }
 
    
 
        int min_price = prices[0];
 
        for (int i = 0; i < n; i++) {
 
           
 
            min_price = min_price>prices[i]?prices[i]:min_price;
            
 
            
            cost = prices[i] - min_price;
 
            maxCost = maxCost>cost?maxCost:cost;
            
        }
        return maxCost;
    }
};