class Solution {
public:
    int candy(vector<int>& arr) {
        int n=arr.size();
        vector<int> nums(n,1);
        for(int i=1;i<n;i++)
        {
            if(arr[i-1]<arr[i])
                nums[i]+=nums[i-1];
        }
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i+1]<arr[i])
            {
                if(nums[i]>nums[i+1])
                    nums[i]=nums[i];
                else
                    nums[i]=1+nums[i+1];
            }
        }
        int res=0;
        for(auto a:nums)
            res+=a;
        return res;
    }
};