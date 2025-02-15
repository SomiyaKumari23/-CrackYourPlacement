class Solution {
public:
    int func(vector<int> &prices,int buy,int ind,vector<vector<int>> &dp){
        if(ind>=prices.size())
        return 0;
        if(dp[ind][buy]!=-1)
        return dp[ind][buy];
        int take,nottake;
        if(buy){
            take=-prices[ind]+func(prices,0,ind+1,dp);
            nottake=func(prices,1,ind+1,dp);
        }
        else{
            take=prices[ind]+func(prices,1,ind+1,dp);
            nottake=func(prices,0,ind+1,dp);
        }
        return dp[ind][buy]=max(take,nottake);
    }

    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size()+1,vector<int>(2,-1));
        return func(prices,1,0,dp);
    }
};