//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int fun(int wt[],int val[],int i,int w,vector<vector<int>> &dp){
        if(i==0){
            if(wt[i]<=w) return val[i];
            return 0;
        }
        
        if(dp[i][w]!=-1) return dp[i][w];
        int pick=INT_MIN,notpick=INT_MIN;
        if(wt[i]<=w) pick=val[i]+fun(wt,val,i-1,w-wt[i],dp);
        notpick=0+fun(wt,val,i-1,w,dp);
        
        return dp[i][w]=max(pick,notpick);
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>> dp(n, vector<int> (W+1,-1));
       return fun(wt,val,n-1,W,dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends