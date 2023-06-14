class Solution {
public:
    int reverse(int x) {int n;
            if(x>=2147483647 || x<=-2147483648){return 0;}

        if(x<0){
            x=x*-1;
            n=1;
        }
        else n=0;

        long int reverse=0;
        int z=x;
        while(z!=0)
        {
            reverse=reverse*10+z%10;
            z=z/10;
        }
        if(n==1){reverse=reverse*-1;}
        if(reverse>=2147483647 || reverse<=-2147483648){return 0;}
        return reverse;

    }
};