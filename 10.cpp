class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0;
        map<int,int> mp;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<nums.size();i++){
              sum=sum+nums[i];//
              sum=sum%k;//4
              if(sum<0)
              sum=sum+k;
              cout<<sum<<" ";
              if(mp.find(sum)!=mp.end()){
                ans=ans+mp[sum];
                mp[sum]++;
              }
              else mp[sum]++;
        }
        return ans;
    }
};