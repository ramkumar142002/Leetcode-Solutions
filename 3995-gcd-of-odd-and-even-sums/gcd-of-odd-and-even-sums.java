class Solution {
    public int gcdOfOddEvenSums(int n) {
        int sumOdd = 0;
        int sumEven = 0;

        int even = 2;
        int odd = 1;

        int count = 0;
        while(count<n){
            sumOdd += odd;
            sumEven += even;

            odd += 2;
            even += 2;
            count++;
        }

        int numer = 0;
        int denom = 0;
        if(sumOdd > sumEven){
            numer = sumOdd;
            denom = sumEven;
        }else{
            numer = sumEven;
            denom = sumOdd;
        }
        int rem = numer%denom;
        while(rem != 0){
            numer = denom;
            denom = rem;

            rem = numer/denom;
        }
        return denom;
    }
}