class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        vector<int> min;
        int max=0,c=0;
        for(int i=0;i<rectangles.size();i++)
        {
            if(rectangles[i][0]>rectangles[i][1])
                min.push_back(rectangles[i][1]);
            else
                min.push_back(rectangles[i][0]);
                if(max<min[i])
                {
                    max=min[i];
                    c=0;
                }
            if(max==min[i])
                c++;
        }
        return c;
    }
};