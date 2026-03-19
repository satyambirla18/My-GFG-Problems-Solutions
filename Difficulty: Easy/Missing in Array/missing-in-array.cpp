class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long sum = 0;
        long long n = arr.size();
        
        for(long long i = 0; i < n; i++){
            sum += arr[i];
        }
        
        long long a_sum = (n+1)*(n+2)/2;
        
        long long miss = a_sum - sum;
        
        return miss;
    }
};