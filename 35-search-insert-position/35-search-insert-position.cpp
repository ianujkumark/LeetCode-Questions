class Solution {
public:
    int searchInsert(vector<int>& arr, int t) {
        int n=arr.size();
        int f=n,i;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]==t)
                f=i;
            else if(i==0 && t<arr[i])
                f=i;
            else if(arr[i]<t && t<arr[i+1])
                f=i+1;
        }
        if(arr[i]==t)
            return i;
        else if(n==1 && t<=arr[0])
            return 0;
        else if(n==1 && t>arr[0])
            return 1;
        else 
            return f;
    }
};