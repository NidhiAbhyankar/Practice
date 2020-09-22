class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        for(auto it=nums.begin();it!=nums.end();){  
            if(*it==val)
                nums.erase(it);
            else
                ++it;            //move ahead only when the elements don't match 
        }                        //as erasing matching elements automatically changes the index position.
        return nums.size();
        /*int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val)
                nums[j++]=nums[i];
        }
        return j;*/
    }
};