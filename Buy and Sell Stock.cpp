class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const size_t n = prices.size();
        int ans = 0;
        for (size_t i=1;i<n;i++)
            ans += max(0,prices[i]-prices[i-1]);
        return ans;
    }
};
