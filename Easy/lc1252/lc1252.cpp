class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<vector<int>> M(n,vector<int>(m,0));
       int count=0;
       for(int i=0;i<indices.size();i++)
       {
            for(int p=0;p<n;p++)
            {            
                  M[p][indices[i][1]]+=1;  
            } 
            for (int q=0;q<m;q++)
            {
                  M[indices[i][0]][q]+=1;
            }
       }
        
        for (int p=0;p<n;p++)
        {
            for (int q=0;q<m;q++)
            {
                if (M[p][q]%2==1)
                    count++;
            }
        }
        return count;
    }
};