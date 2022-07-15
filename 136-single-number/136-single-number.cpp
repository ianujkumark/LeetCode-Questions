class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t;
        if(nums.size()==1)
            return nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[i+1])
                t=nums[i];
            else
                i++;
        }
        return t;
    }
};