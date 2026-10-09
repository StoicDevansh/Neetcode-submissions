class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        for(int i=0; i<size(prices); i++){
            int buy=prices[i];
            for(int j=i+1;j<size(prices); j++){
                int sell= prices[j];
                maxProfit=max(maxProfit, sell-buy);
            }
        }
        return maxProfit;
    }
};
