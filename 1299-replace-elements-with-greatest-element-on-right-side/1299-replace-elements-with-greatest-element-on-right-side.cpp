class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> n;
        for(int i=0;i<arr.size()-1;i++)
        {
            int max=*max_element(arr.begin()+i+1,arr.end());
            n.push_back(max);
        }
        n.push_back(-1);
        return n;
    }
};