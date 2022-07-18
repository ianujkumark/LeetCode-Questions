class Solution {
public:
    vector<long long> kthPalindrome(vector<int>& queries, int intLength) {
         int n=(intLength%2==0)?(intLength/2)-1:(intLength/2);
        vector<long long> res;
        int n1=pow(10,n);
        for(auto a:queries)
        {
            string s1=to_string(n1+a-1);
            string rev=s1;
            reverse(rev.begin(),rev.end());
            if(intLength%2 ==0)
            {
                s1=s1+rev;
            }
            else
            {
                s1=s1+ rev.substr(1,rev.size()-1);
            }
            if(s1.size()==intLength)
                res.push_back(stoll(s1));
            else
                res.push_back(-1);
        }
        return res;
    }
};