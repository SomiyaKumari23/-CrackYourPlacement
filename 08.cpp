class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         sort(nums.begin(), nums.end());
        set<vector<int>> s;
        vector<vector<int>> output;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int l=j+1,m=nums.size()-1;
                while(l<m){
                    if((long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[m]==target){
                        s.insert({nums[i],nums[j],nums[l],nums[m]});
                        l++;
                        m--;
                    }
                    else if((long long)nums[i]+(long long)nums[j]+(long long)nums[l]+(long long)nums[m]<target){
                        l++;
                    }
                    else m--;
                }
            }
        }
         for(auto i : s)
            output.push_back(i);
        return output;
    }
};