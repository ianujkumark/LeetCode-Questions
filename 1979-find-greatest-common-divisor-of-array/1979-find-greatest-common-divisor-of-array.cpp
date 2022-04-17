class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        int i;
        for(i=min;i>=1;i--)
        {
            if(min%i==0 && max%i==0)
                break;
        }
        return i;
    }
};