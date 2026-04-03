class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<int> count(n, 0);
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            count[arr[i]-1]++;
        }
        for(int j = 0; j < n; j++){
            if(count[j] == 2) ans.push_back(j+1);
        }
        for(int j = 0; j < n; j++){
            if(count[j] == 0) ans.push_back(j+1);
        }
        return ans;
    }
};