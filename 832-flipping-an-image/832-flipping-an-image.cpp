class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> n;
        vector<int> n1;
        for(int i=0;i<image.size();i++)
        {
                for(int j=image[i].size()-1;j>=0;j--)
                {
                    if(image[i][j]==0)
                        n1.push_back(1);
                    else
                        n1.push_back(0);                        
                }
            n.push_back(n1);
            n1.clear();
        }
        return n;
    }
};