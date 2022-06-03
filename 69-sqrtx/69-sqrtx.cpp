class Solution {
public:
    int mySqrt(int x) {
        long long l=0,h=x,ans,t,mid;
        while(l<=h)
        {
            mid=l+(h-l)/2;
            t=mid*mid;
            if(t<=x)
            {
                ans=mid;
                l=mid+1;
            }
            else if(t>x)
                h=mid-1;
            else if(t==x)
            {
                ans=mid;
                break;
            }
        }
        return (int)ans;
    }
};