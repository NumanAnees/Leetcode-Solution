class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int maxProfit = 0;
    int minSofar = prices[0];
    for(int i=0;i<prices.size();i++)
    {
        minSofar = min(minSofar,prices[i]);
        int profit = prices[i]-minSofar;
        maxProfit=max(maxProfit,profit);
    }
        return maxProfit;
    }
};
//-------------------------------------Aproach-2-----------------------------------
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minProfit = INT_MAX;
        int maxProfit = 0;
        for (auto &val : prices) {
            minProfit = min(val, minProfit);//buy
            maxProfit = max((val - minProfit), maxProfit);//sell
        }
        return maxProfit;
    }
};