class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
//         int n=digits.size();
//         if(digits[n-1]<9){
//             digits[n-1]+=1;
//             return digits;
//         }
//         int j=n-1;

//         while(j>1 && digits[j]==9){
//             j--;
//         }
//         j++;
//         digits[j]=1;
//         for(int i=j+1;i<n;i++){
//             digits[i]=0;
//         }
//         digits.push_back(0);
//         return digits;
        
        // if(digits[n-1]==9){
        //     digits[n-1]=1;
        //     digits.push_back(0);
        //     return digits;
        // }
        
        // int temp = digits[digits.size()-1];
        if(digits[digits.size()-1] < 9){
            digits[digits.size()-1] += 1;
            return digits;
        }
        else{
            int temp = 0;
            
            while(digits.size()!=0 && digits[digits.size()-1] == 9){
                temp++;;
                // c++;
                digits.pop_back();
                // temp += 1;
            }
            // temp += 1;
            
            // string s = to_string(temp);
            
            
            
            if(digits.size() == 0){
                digits.push_back(1);
                for(int i = 0;i<temp;i++){
                    digits.push_back(0);
                }
                return digits;
            }
            
            digits[digits.size()-1] += 1;
            for(int i = 0;i<temp;i++) digits.push_back(0);
            
        }
        return digits;
    }
};