class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int c=0,max=0;
        for(int i=0;i<sentences.size();i++)
        {
            sentences[i]+=" ";
            for(int j=0;j<sentences[i].length();j++)
            {
                char ch=sentences[i].at(j);
                if(ch==' ')
                    c++;
            }
            if(max<c)
                max=c;
            c=0;
        }
        return max;
    }
};