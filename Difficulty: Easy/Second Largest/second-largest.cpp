class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int sec_max = -1;
        int max_ele = INT_MIN;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] > max_ele) max_ele = arr[i];
        }
        
        for(int j = 0; j < arr.size(); j++){
            if(arr[j] != max_ele){
                sec_max = max(sec_max, arr[j]);
            }
        }
        
        return sec_max;
    }
};