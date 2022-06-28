class Solution {
public:
    int trap(vector<int>& nums) {
        int res=0,n=nums.size();
        vector<int> lmax(n);
        vector<int> rmax(n);
        lmax[0]=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]>lmax[i-1])
                lmax[i]=nums[i];
            else
                lmax[i]=lmax[i-1];
        }
        rmax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]>rmax[i+1])
                rmax[i]=nums[i];
            else
                rmax[i]=rmax[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(lmax[i]<rmax[i])
                res=res+lmax[i]-nums[i];
            else
                res=res+rmax[i]-nums[i];
        }
        return res;
    }
};