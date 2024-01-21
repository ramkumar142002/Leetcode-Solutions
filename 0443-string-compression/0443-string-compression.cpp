class Solution {
public:
    int compress(vector<char>& chars) {
        char pres = chars[0];
        string temp = "";
        int count = 0;
        for(int i = 0;i<chars.size();i++){
            if(chars[i] == pres){
                count++;
            }
            else{
                cout<<i<<endl;
                temp += pres;
                if(count>9){
                    temp += to_string(count);
                }
                else if(count!=1){
                    temp += to_string(count);
                }
                pres = chars[i];
                count = 1;
            }
            if(i==chars.size()-1){
                temp+=pres;
                if(count>1) temp += to_string(count);
            }
        }
        for(int i = 0;i<temp.size();i++){
            chars[i] = temp[i];
        }
        return temp.size();
    }
};
