class Solution {
public:
    int ways(vector<int>&nums,int index,vector<int>&dp){
        if(index>nums.size()-1)
        return 0;
        if(dp[index]!=-1)
        return dp[index];
        if(index==nums.size()-1)
        return 1;
        for(int i=1;i<=nums[index];i++){
            int ans=ways(nums,index+i,dp);
            if(ans==1)
            return dp[index]=1;
        }
      return dp[index]=0;
    }
    bool canJump(vector<int>& nums) {
         vector<int> dp(nums.size()+1,-1);
         return ways(nums,0,dp);
        }
};