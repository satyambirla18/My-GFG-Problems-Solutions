class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left = 0;
        int right = arr.size() - 1;
        
        while(left < right){
            int t = arr[left];
            arr[left] = arr[right];
            arr[right] = t;
            
            left++;
            right--;
        }
    }
};