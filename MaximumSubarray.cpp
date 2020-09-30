class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=INT_MIN,finalSum=INT_MIN;
        for(auto n:nums){
            curr=curr < 0 ? n :curr+n;
            finalSum=max(finalSum,curr);
        }
        return finalSum;
    }
};