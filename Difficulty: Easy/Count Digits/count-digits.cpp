class Solution {
  public:
    int countDigits(int n) {
        int count = 0;
        if (n == 0) return 1;
    
        int num = n;
        while (num > 0) {
            num /= 10;
            count++;
        }
    
        return count;
    }
};