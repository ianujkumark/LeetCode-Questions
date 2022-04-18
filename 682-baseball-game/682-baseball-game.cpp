class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> n;
        int j=-1;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                n.push_back(n[j]+n[j-1]);
                j++;
            }
            else if(ops[i]=="D")
            {
                n.push_back(n[j]*2);
                j++;
            }
            else if(ops[i]=="C")
            {
                n.pop_back();
                j--;
            }
            else
            {
                n.push_back(stoi(ops[i]));
                j++;
            }
        }
        return accumulate(n.begin(),n.end(),0);
    }
};