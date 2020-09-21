class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        /*for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]!=nums[j])
                    break;
                nums.erase(nums.begin()+j);
            }
        }*/

        //move from vector to set and after we get unique items again back to vector
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]); 
        nums.clear();
        set<int> :: iterator it;
        for(it=s.begin();it!=s.end();++it)
            nums.push_back(*it);
        return nums.size();
        
    }
};