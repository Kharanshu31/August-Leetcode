class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         if(grid.size()==0)
             return 0;
         int n=grid.size();
         int m=grid[0].size();
         int fresh=0;
         queue<pair<int,int>>q;
         for(int i=0;i<n;i++)
         {
             for(int j=0;j<m;j++)
             {
                 if(grid[i][j]==1)
                     fresh++;
                 else if(grid[i][j]==2)
                     q.push(make_pair(i,j));
             }
         }
         int time=0;
         vector<pair<int, int>> dirs = { {0, 1}, {1, 0}, {-1, 0}, {0, -1} };
         while(!q.empty())
         {
             for(int i=0;i<q.size();i++)
             {
                 auto it=q.front();
                
                 for(auto &d:dirs)
                 {
                     int newX=d.first+it.first;
                     int newY=d.second+it.second;
                     if (newX >= 0 && newX < m && newY >= 0 && newY < n && grid[newX][newY] == 1)
 					{
                         grid[newX][newY] = 2;
 						--fresh;
 						q.push({ newX, newY });
 					}
                 }
             }
             time++;
         }
        
         return fresh==0 ? time : -1;
 
    }
};
