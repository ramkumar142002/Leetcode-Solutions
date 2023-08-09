class Solution {
public:
    int dp3(vector<vector<int>>& grid,int i,int j1,int j2,int r,int c,vector<vector<vector<int>>> &dp){
        if(j1<0 || j2<0 || j1>=c || j2>=c) return -1e8;
        if(i==r-1){
            if(j1==j2) return grid[i][j1];
            else return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        int maxi=-1e8;
        for(int d1=-1;d1<=1;d1++){
            for(int d2=-1;d2<=1;d2++){
                int value=0;
                if(j1==j2) value=grid[i][j1];
                else value=grid[i][j1]+grid[i][j2];
                value=value+dp3(grid,i+1,d1+j1,d2+j2,r,c,dp);
                maxi=max(maxi,value);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        int c=grid[0].size(),r=grid.size();
        vector<vector<vector<int>>> dp(r, vector<vector<int>>(c,vector<int> (c,-1)));
        return dp3(grid,0,0,c-1,r,c,dp);
    }
};