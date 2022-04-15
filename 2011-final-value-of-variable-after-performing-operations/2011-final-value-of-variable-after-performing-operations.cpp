class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        char ch;
        for(int i=0;i<operations.size();i++)
        {
            ch=operations[i].at(1);
            if(ch=='+')
                x++;
            else
                x--;
        }
        return x;
    }
};