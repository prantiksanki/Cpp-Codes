#include<iostream>
#include<vector>
#include<queue>
// #include<pair>
using namespace std;

void bfs(int i, int j, vector<vector<int>>&grid, vector<vector<int>>&vis)
{
    vis[i][j] = 1 ; 
    vector<int>drow = {-1,0,1,0} ;
    vector<int>dcol = {0,1,0,-1} ;

    queue<pair<int,int>>q ; 
    q.push({i,j}) ;

    while(!q.empty())
    {
        int r = q.front().first ;
        int c = q.front().second ;
        q.pop() ;

        for(int i = 0 ; i < 4 ; i++)
        {
            int nr = r + drow[i] ; 
            int nc = c + dcol[i] ;

            if(nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && grid[nr][nc] == 1 && !vis[nr][nc])
            {
                vis[nr][nc] = 1 ;
                q.push({nr,nc}) ;
            }
        }
    }
}

int main()
{

    vector<vector<int>>grid = {
        {1,1,0,0,0},
        {1,0,0,1,1},
        {0,0,0,1,0},
        {0,1,0,0,0},
        {1,1,1,0,0}
    } ;

    int n = grid.size() ;
    int m = grid[0].size() ;
    vector<vector<int>>vis(n,vector<int>(m,0)) ;
    int cnt = 0 ; 

    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < m ; j++)
        {
            if(grid[i][j] == 1 && !vis[i][j])
            {
                cnt++ ; 
                bfs(i,j,grid,vis) ;
            }
        }
    }

    cout << cnt << endl ; 
}