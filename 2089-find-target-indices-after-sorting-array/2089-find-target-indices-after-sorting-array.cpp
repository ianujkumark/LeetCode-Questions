class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int c=0;
        vector<int> n;
        for(int i=0;i<nums.size();i++)
            if(nums[i]==target)
                n.push_back(i);
        return n;
    }
};