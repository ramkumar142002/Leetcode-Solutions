class Solution {
public:
    bool find(vector<int> &arr,int a){
        int i=0,j=arr.size()-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(arr[mid]==a) return true;
            else if(arr[mid]>a) j = mid-1;
            else i = mid+1;
        }
        return false;
    }
    vector<string> buildArray(vector<int>& target, int n) {
        cout<<target.size()<<endl;
        int i = 1;
        stack<int> st;
        vector<string> ans;
        while(i<=n){
            // cout<<i<<endl;
            st.push(i);
            ans.push_back("Push");
            if(!st.empty()) cout<<st.top()<<endl;
            if(find(target,i)==false){
                st.pop();
                ans.push_back("Pop");
            }
            if(!st.empty() && st.top() == target[target.size()-1]) break;
            i++;
        }
        return ans;
    }
};
