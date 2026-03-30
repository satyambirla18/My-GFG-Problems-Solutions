// User function template for C++

class Solution {
  public:
    bool isProduct(vector<int> arr, long long x) {
        sort(arr.begin(), arr.end());
        long long s = 0;
        long long e = arr.size()-1;
        while(s < e){
            long long p = 1LL*arr[s]*arr[e];
            if(x == p){
                return true;
            }
            else if(p > x) e--;
            else s++;
        }
        return false;
    }
};