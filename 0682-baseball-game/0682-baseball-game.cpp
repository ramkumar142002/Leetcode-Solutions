class Solution {
public:
    int calPoints(vector<string>& s) {
        stack<int> a;
        for(int i=0;i<s.size();i++){
            if(s[i]=="+"){
                int temp=a.top();
                a.pop();
                int temp2=a.top();
                a.pop();
                a.push(temp2);
                a.push(temp);
                a.push(temp+temp2);
            }
            else if(s[i]=="D"){
                int t=a.top();
                a.push(2*t);
            }
            else if(s[i]=="C"){
                a.pop();
            }
            else{
                int x=stoi(s[i]);
                a.push(x);
            }
            // cout<<a.top()<<endl;
        }
        
        int ret=0;
        while(!a.empty()){
            ret+=a.top();
            a.pop();
        }
        return ret;
    }
};