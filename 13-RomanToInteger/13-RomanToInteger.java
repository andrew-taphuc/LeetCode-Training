// Last updated: 1/28/2026, 2:48:28 PM
class Solution {
    public int romanToInt(String s) {
        char[] Rom = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int[] Integer = {1, 5, 10, 50, 100, 500, 1000};
        char[] charArray = s.toCharArray();
        int[] intArray = new int[charArray.length];
        int i = 0;
        int index = 0;
        int sum = 0;
        int preValue = 0;

        for (char c : charArray) {
            int cnt = 0;
            for (char k : Rom) {
                if (c == k) index = cnt;
                cnt++;
            }
            if (Integer[index] > preValue){
                sum = sum - 2*preValue + Integer[index];
            }
            else {
                sum += Integer[index];
            }
            preValue = Integer[index];
        }
        return sum;
    }
}