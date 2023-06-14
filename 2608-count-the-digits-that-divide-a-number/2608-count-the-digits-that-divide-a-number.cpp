class Solution {
public:
    int countDigits(int num) {vector<int> a;int x=0;
    int n=num;
    while(n!=0){
        a.push_back(n%10);
        n=n/10;
    }
    for(int i=0;i<a.size();i++){
        if(num%a[i]==0) x++;
    }
    return x;
    }
};