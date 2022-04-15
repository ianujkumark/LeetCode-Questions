class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int l=nums.size();
        for(int i=l;i<2*l;i++)
        {
            nums.push_back(nums[i-l]);
        }
        return nums;
    }
};