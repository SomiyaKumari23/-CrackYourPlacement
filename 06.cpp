class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums[j]){
                j++;
                swap(nums[i],nums[j]);
            }
        }
        int ans=nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
           if(nums[i]>=nums[i+1])
           {
            ans=i;
            break;
           }
        }
        cout<<ans;
        return ans+1;
    }
};