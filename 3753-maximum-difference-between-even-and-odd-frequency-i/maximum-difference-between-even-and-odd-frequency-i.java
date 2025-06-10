class Solution {
    public int maxDifference(String s) {
        HashMap<Character,Integer> m = new HashMap<>();
        for(int i=0;i<s.length();i++){
            Character c = s.charAt(i);
            if (m.containsKey(c)) {
                m.put(c, m.get(c) + 1);
            }
            else {
                m.put(c, 1);
            }
        }
        int maxOdd = Integer.MIN_VALUE, minEven = Integer.MAX_VALUE;
        for (Map.Entry<Character,Integer> mapElement : m.entrySet()) {
            Character key = mapElement.getKey();
            int value = mapElement.getValue();

            if(value%2 == 0){
                minEven = Math.min(minEven, value);
            }
            else{
                maxOdd = Math.max(maxOdd, value);
            }
        }

        return maxOdd - minEven;
    }
}