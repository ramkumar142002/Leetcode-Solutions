//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> a;
        for(int i=0;i<x.length();i++){
            if(x[i]=='{' || x[i]=='(' || x[i]=='[') a.push(x[i]);
            else if(a.empty()) return false;
            else if(x[i]=='}' && a.top()=='{') a.pop();
            else if(x[i]==')' && a.top()=='(') a.pop();
            else if(x[i]==']' && a.top()=='[') a.pop();
            else return false;
        }
        if(a.empty()) return true;
        return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends