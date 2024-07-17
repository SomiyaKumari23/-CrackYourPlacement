class Solution {
public:
void cyclicSort(vector<int> &nums, int n){
  int i = 0; 
  while(i < n)
  {
    int correct = nums[i] - 1 ;
    if(nums[i] != nums[correct]){
 
      swap(nums[i], nums[correct]) ;
    }else{
 
      i++ ;
    }
  }
 
}
    vector<int> findDuplicates(vector<int>& nums) {
        cyclicSort(nums,nums.size());
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            cout<<nums[i]<<" ";
            if(nums[i]!=i+1)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};