//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        int count[3]={0};
        for(int i=0;i<n;i++){
            count[a[i]]++;
        }
        for(int i=1;i<3;i++){
            count[i]=count[i]+count[i-1];
        }
        int b[n]={0};
        for(int i=n-1;i>=0;i--){
            b[--count[a[i]]]=a[i];
        }
        for(int i=0;i<n;i++){
            a[i]=b[i];
        }
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends