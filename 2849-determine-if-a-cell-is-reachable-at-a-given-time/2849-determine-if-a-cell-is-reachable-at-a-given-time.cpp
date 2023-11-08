class Solution {
public:
    int fun(vector<vector<int>> &mat,int i,int j){
        if(i==0 && j==0) return 1;
        if(i<0 || j<0) return 0;
        
        int u = fun(mat,i-1,j);
        int l = fun(mat,i,j-1);
        int d = fun(mat,i-1,j-1);
        return min(u,min(l,d));
    }
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        int m = fy - sy ;
        int n = fx - sx;
        // vector<vector<int>> dp(m,vector<int> (n,0));
        // int mini = fun(dp,m-1,n-1);
        // cout<<m<<" "<<n<<endl;
        // cout<<mini<<endl;
        // if(t >= mini+1 ) return true;
        // return false;
        
        if(sx==fx && sy==fy){
            if(t==1) return false;
        }
        if(m<0) m*= -1;
        if(n<0) n*= -1;
        int maxi = max(m,n);
        cout<<m<<" "<<n<<endl;
        cout<<maxi<<endl;
        if(maxi <= t) return true;
        return false;
    }
};