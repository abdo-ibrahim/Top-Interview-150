class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int prev = prices[0] , mx = 0;
        for(int i = 1; i < n; i++) {
            if(prices[i] - prev > 0 ){
                mx = max(mx, prices[i] - prev);
            }
            prev = min(prev, prices[i]);
        }
        return mx;
    }
};