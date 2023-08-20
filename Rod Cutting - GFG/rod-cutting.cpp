//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
    int fun(int i,int price[],int n,vector<vector<int>> &dp){
        if(i==0){
            return n*price[0];
        }
        
        if(dp[i][n]!=-1) return dp[i][n];
        int notake=0+fun(i-1,price,n,dp);
        int take=INT_MIN;
        int rod=i+1;
        if(rod<=n) take=price[i]+fun(i,price,n-rod,dp);
        
        return dp[i][n]=max(take,notake);
    }
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>> dp(n,vector<int> (n+1,0));
        // return fun(n-1,price,n,dp);
        for(int i=0;i<n+1;i++) dp[0][i]=i*price[0];
        
        for(int i=1;i<n;i++){
            for(int j=0;j<n+1;j++){
                int notake=0+dp[i-1][j];
                int take=INT_MIN;
                int rod=i+1;
                if(rod<=j) take=price[i]+dp[i][j-rod];
                
                dp[i][j]=max(take,notake);
            }
        }
        return dp[n-1][n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends