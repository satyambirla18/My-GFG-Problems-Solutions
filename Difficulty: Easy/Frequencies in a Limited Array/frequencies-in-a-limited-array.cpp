class Solution {
  public:
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> ans(n, 0);
        
        for(int i = 0; i < n; i++){
            arr[i]--;
        }
        for(int j = 0; j < n; j++){
            arr[arr[j] % n] += n;
        }
        for(int i = 0; i < n; i++){
            arr[i] /= n;
        }
        return arr;
    }
};