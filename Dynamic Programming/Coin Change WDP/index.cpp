class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int count=0;
        sort(coins.begin(),coins.end());
        for(int i=coins.size()-1;i>=0;i--){
            int div = floor(amount/coins[i]);
            if(div>0){
                count++;
                amount=amount-coins[i];
                i=i+1;//same coin can be used again...
            }else{
                continue;
            }
        }
        cout<<amount;
        amount==0?count=count:count=-1;
        return count;
    }
};
