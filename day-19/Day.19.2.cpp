class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;  // initially set to a very high value
        int maxProfit = 0;       // initially no profit

        for(int price : prices) {
            if(price < minPrice) {
                minPrice = price;  // update minPrice if current is lower
            } else {
                int profit = price - minPrice;
                maxProfit = max(maxProfit, profit);  // update maxProfit if better profit found
            }
        }

        return maxProfit;
    }
};
