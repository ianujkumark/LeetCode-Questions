class Solution {
public:
    int fib(int n) {
        int a=0,b=1,c=a+b;
        if(n==0)
            return a;
        else if(n==1)
            return b;
        else
            for(int i=2;i<n;i++)
            {
                a=b;
                b=c;
                c=a+b;
            }
        return c;
    }
};