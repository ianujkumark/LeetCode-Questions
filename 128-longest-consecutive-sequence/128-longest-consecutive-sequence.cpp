class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=1,m=c;
        if(nums.size()==0)
            return 0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[i-1])
                continue;
            if(nums[i]==nums[i-1]+1)
                c++;
            else 
            {
                m=max(m,c);
                c=1;
            }
        }
        return max(m,c);
    }
};