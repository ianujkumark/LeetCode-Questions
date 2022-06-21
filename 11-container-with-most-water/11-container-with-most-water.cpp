class Solution {
public:
    int maxArea(vector<int>& arr) {
        int l=0,h=arr.size()-1,c1,c2,t1,t2,max,max1=0;
        t1=arr[l];
        t2=arr[h];
        c1=0;
        c2=h;
        while(l<h)
        {
            if(arr[l]<arr[h])
                max=(c2-c1)*arr[l];
            else
                max=(c2-c1)*arr[h];
            if(max1<max)
            {
                max1=max;
            }
            if(arr[l]<arr[h])
            {
                l++;
                c1=l;
            }
            else
            {
                h--;
                c2=h;
            }
        }
        if(arr.size()>2)
            return max1;
        else {
            if(arr[0]>arr[1])
                return arr[1];
            else 
                return arr[0];
        }
    }
};