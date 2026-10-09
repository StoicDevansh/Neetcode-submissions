class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) return 0;

        auto l = prices.begin();
        auto r = prices.begin() + 1;

        int profit = 0;

        while (r != prices.end()) {
            if (*r < *l) {
                l = r;
            } else {
                profit = max(profit, *r - *l);
            }

            ++r;
        }

        return profit;
    }
};