class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> submit;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    submit.push_back(i);
                    submit.push_back(j);
                    return submit;
                }
                    
            }
        }
      return submit;       
    }
};