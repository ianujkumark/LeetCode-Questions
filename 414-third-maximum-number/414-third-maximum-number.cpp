class Solution {
public:
    int thirdMax(vector<int>& arr) {
        int n=arr.size();
        int m1=arr[0],m2,m3,c=0,t=0;
        if(n>=3)
        {
            for(int i=0;i<n;i++)
            {
                if(m1<arr[i])
                    m1=arr[i];
            }
            for(int i=0;i<n;i++)
            {
                if(arr[i]==m1)
                    continue;
                else
                {
                    if(c==0)
                    {
                        m2=arr[i];
                        c++;
                    }
                    if(m2<arr[i])
                        m2=arr[i];
                }
            }
            c=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]==m1 || arr[i]==m2)
                    continue;
                else
                {
                    if(c==0)
                    {
                        m3=arr[i];
                        c++;
                    }
                    
                    if(m3<arr[i])
                    {
                        m3=arr[i];
                    }
                }
            }
        }
        if(n==1)
            return arr[0];
        else if(n==2)
        {
            if(arr[0]<arr[1])
                return arr[1];
            else 
                return arr[0];
        }
        else if(c==0)
            return m1;
        else
            return m3;
    }
};