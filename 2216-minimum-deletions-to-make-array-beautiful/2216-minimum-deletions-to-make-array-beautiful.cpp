class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int n=nums.size();
        int d=0;
        for(int i=0;i<n-1;i++)
        {
            if((i-d)%2==0)
            {
                if(nums[i]==nums[i+1])
                {
                    d++;
                }
                    
            }
        }
        if((n-d)%2==1) d++;
        return d;
    }
};