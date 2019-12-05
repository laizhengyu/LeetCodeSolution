class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int count=0;
        vector<int> H=heights;
       sort(heights.begin(),heights.end());
        for (int i=0;i<heights.size();i++)
        {
            if(H[i]!=heights[i]) count++;
        }
        return count;
    }
};
