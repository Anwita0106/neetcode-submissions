class Solution {
private:
void dfs(int row,int col,vector<vector<char>>&grid,vector<vector<int>>&vis)
{
    vis[row][col]=1;
    int nr[]={1,-1,0,0};
    int nc[]={0,0,-1,1};
    for(int i=0;i<4;i++)
    {
        int nrow=row+nr[i];
        int ncol=col+nc[i];
        if(nrow>=0 && nrow < grid.size() && ncol>=0 && ncol< grid[0].size())
        {
            if(grid[nrow][ncol]=='1')
            {
                if(!vis[nrow][ncol])
                {
                    dfs(nrow,ncol,grid,vis);
                }
            }
        }
    }
}
public:
    int numIslands(vector<vector<char>>& grid) 

    {   int row=grid.size();
       int  col=grid[0].size();
        vector<vector<int>>vis(row,vector<int>(col,0));
        int ans=0;
        for(int i=0;i< row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1'&& !vis[i][j])
                {
                    ans++;
                    dfs(i,j,grid,vis);

                }
            }
        }
        return ans;
    }
};