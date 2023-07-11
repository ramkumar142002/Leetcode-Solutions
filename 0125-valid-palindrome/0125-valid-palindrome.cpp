class Solution {
public:
    bool isPalindrome(string s) {
        // int i=0,j=s.length()-1;
        // while(i<s.length()/2){
        //     // if(s[i]<65 || s[i]=='\0') i++;
        //     while(s[i]>64 && s[i]!='\0'){
        //         i++;
        //     }
        //     // if(s[j]<65 || s[j]=='\0') j--;
        //     while(s[j]>64 && s[j]!='\0'){
        //         j--;
        //     }
        //     if(s[i]>=65 && s[i]<97) s[i]=s[i]+32;
        //     if(s[j]>=65 && s[j]<97) s[j]=s[j]+32;
        //     cout<<s[i]<<" "<<s[j]<<endl;
        //     if(s[i]!=s[j]) return false;
        //     i++;
        //     j--;
        // }
        // return true;
    vector<int> a;
        for(int i=0;i<s.length();i++){
            if(iswalnum(s[i])) a.push_back(s[i]);
        }
        int i=0;
        int j=a.size()-1;
        while(i<a.size()/2){
            if(a[i]<97) a[i]=a[i]+32;
            if(a[j]<97) a[j]=a[j]+32;
            if(a[i]!=a[j]) return false;
            i++;
            j--;
        }
        return true;
    }
};