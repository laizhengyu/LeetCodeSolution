class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string> location;
        vector<vector<int>> mark(n,vector<int>(n,0));
        vector<vector<string>> result;
        for(int i=0;i<n;i++)
        {
            location.push_back("");
            location[i].append(n,'.');
        }
        gen(0,n,location,mark,result);
        return result;

    }
private:
    void put_down(int x,int y,vector<vector<int>> &mark)
    {
        //direction matrix
        int dx[]={-1,-1,-1,0,0,1,1,1};
        int dy[]={-1,0,1,-1,1,-1,0,1};
        mark[x][y]=1;
        for (int i=1;i<mark.size();i++)
            for (int j=0;j<8;j++)
            {
                int new_x= x+i*dx[j];
                int new_y= y+i*dy[j];
                if (new_x>=0&&new_y>=0&&new_x<mark.size()&&new_y<mark.size())
                    mark[new_x][new_y]=1;
            }
    }
    void gen(int k,int n,
            vector<string> &location,
            vector<vector<int>> &mark,
            vector<vector<string>> &result){
        if (k==n) {
            result.push_back(location);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if (mark[k][i]==0) {
                vector<vector<int>> temp_mark=mark;//backtracking temp
                location[k][i]='Q';
                put_down(k,i,mark);
                gen(k+1,n,location,mark,result);
                mark=temp_mark;//backtracking
                location[k][i]='.';//reset 
                
            }
        }
    }
};
