class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int total = 0;
        
        for(int x : arr){
            total += x;
        }
        
        int left = 0;
        
        for(int i = 0; i < arr.size(); i++){
            int right = total - left - arr[i];
            
            if(left == right){
                return i;
            }
            
            left += arr[i];
        }
        
        return -1;
    }
};