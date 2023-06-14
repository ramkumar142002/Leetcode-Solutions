class Solution {
public:
    int alternateDigitSum(int n) {vector<int> a;int s=0;
    while(n!=0){
        a.push_back(n%10);
        n=n/10;
    }
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++){
        if(i%2==0) s=s+a[i];
        else s=s-a[i];
    }
    return s;
    }
};