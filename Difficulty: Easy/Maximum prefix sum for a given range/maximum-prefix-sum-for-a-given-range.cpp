class Solution {
  public:
    vector<int> maxPrefixes(vector<int>& arr, vector<int>& leftIndex,
                            vector<int>& rightIndex) {
        int n = arr.size();
        int n1 = leftIndex.size();
        vector<int> prefix;
        int prefix_sum = 0;
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            prefix_sum += arr[i];
            prefix.push_back(prefix_sum);
        }
        
        for(int i = 0; i < n1; i++){
            int max_pre = INT_MIN;
            for(int j = leftIndex[i]; j <= rightIndex[i]; j++){
                int val = prefix[j] - (leftIndex[i] > 0 ? prefix[leftIndex[i]-1] : 0);
                max_pre = max(max_pre, val);
            }
            ans.push_back(max_pre);
        }
        return ans;
    }
};