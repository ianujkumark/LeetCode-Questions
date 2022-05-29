class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j,n1,n2;
        vector<int> n;
        for(i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
                if((nums[i] + nums[j]) == target )
                {
                    n1=i;
                    n2=j;
                    break;
                }
        }
        n.push_back(n1);
        n.push_back(n2);
        return n;
        
    }
};