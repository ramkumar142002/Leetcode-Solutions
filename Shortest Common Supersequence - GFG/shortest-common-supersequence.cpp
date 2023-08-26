//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    int lcs(string X, string Y, int m, int n,vector<vector<int>> &dp){
        if(m==0 || n==0) return 0;
        
        if(dp[m][n]!=-1) return dp[m][n];
        if(X[m-1]==Y[n-1]) return dp[m][n]=1+lcs(X,Y,m-1,n-1,dp);
        return dp[m][n]= max(lcs(X,Y,m-1,n,dp),lcs(X,Y,m,n-1,dp));
    }
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        vector<vector<int>> dp(m+1,vector<int> (n+1,0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(X[i-1]==Y[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        // return m+n-lcs(X,Y,m,n,dp);
        return m+n-dp[m][n];
    }
};

//{ Driver Code Starts.

int main()
{   
    
    int t;
    
    //taking total testcases
    cin >> t;
    while(t--){
    string X, Y;
    //taking String X and Y
	cin >> X >> Y;
	
	//calling function shortestCommonSupersequence()
	Solution obj;
	cout << obj.shortestCommonSupersequence(X, Y, X.size(), Y.size())<< endl;
    }
	return 0;
}


// } Driver Code Ends