class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        int odd = 0, even = 0;

        for(int x : arr) {
            if(x % 2 == 0)
                even++;
            else
                odd++;
        }
    
        return {odd, even};
    }
};