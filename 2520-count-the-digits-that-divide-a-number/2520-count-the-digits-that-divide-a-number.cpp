class Solution {
public:
    int countDigits(int num) {
        int k = num, n = 0, count = 0;
        while (k > 0) {
            n = k % 10;
            if (num % n == 0) {
                count++;
            }
            k = k / 10;
        }
        return count;
    }
};