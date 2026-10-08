// class Solution {
// public:
//     bool valid(int n, int m, int i, int j){
//         if(i<0 || i>n || j>m || j<0)return false;
//         return true;
//     }
//     int x[4]={-1,1,0,0};
//     int y[4]={0,0,-1,1};
//     bool dfs(vector<vector<char>>&grid,int n, int m, int i, int j, vector<bool>visited){
//         visited[i][j]=true;
//         for(int k=0;k<4;k++){
//             int row=i+x[k];
//             int col=j+y[k];
//             if(valid(n,m,row,col) && grid[row][col]=='1' && visited[row][col]==false){
//                 dfs(grid, n,m, row, col,visited);
//             }
//         }
//     }
//     int numIslands(vector<vector<char>>& grid) {
//         int n=grid.size();
//         int m=grid[0].size();
//         int res=0;
//         vector<bool>visited(n,false);
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 if(grid[i][j]=='1' && visited[i][j]==false){
//                     dfs(grid, n,m,i,j,visited);
//                     res++;
//                 }
//             }
//         }
//         return res;
//     }
// };
class Solution {
public:

    int x[4] = {-1, 1, 0, 0};
    int y[4] = {0, 0, -1, 1};

    bool valid(int i, int j, int n, int m) {
        if(i < 0 || i >= n || j < 0 || j >= m) {
            return false;
        }

        return true;
    }

    void dfs(vector<vector<char>>& grid,int n, int m, int i, int j,vector<vector<bool>>& visited) {
        visited[i][j] = true;
        for(int k = 0; k < 4; k++) {
            int row = i + x[k];
            int col = j + y[k];

            if(valid(row, col, n, m) &&
               grid[row][col] == '1' &&
               visited[row][col] == false) {

                dfs(grid, n, m, row, col, visited);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m = grid[0].size();

        int res = 0;

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(grid[i][j] == '1' &&
                   visited[i][j] == false) {

                    dfs(grid, n, m, i, j, visited);

                    res++;
                }
            }
        }

        return res;
    }
};
