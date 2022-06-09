class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,res=nums[0],max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(max+nums[i]<nums[i])
                max=nums[i];
            else
                max=max+nums[i];
            if(res<max)
                res=max;
        }
        return res;
    }
};