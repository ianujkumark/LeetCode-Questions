class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int t=0,c=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                c++;
                t=i;
            }
            else 
                c=1;
            if(c>nums.size()/2)
                break;
        }
        return nums[t];
    }
};