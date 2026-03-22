class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int s = 0;
        int e = arr.size()-1;
        int f = -1;
        
        while(s <= e){
            int mid = s+(e-s)/2;
            if(arr[mid] == target){
                f = mid;
                e = mid-1;
            }
            else if(arr[mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        
        s = 0;
        e = arr.size()-1;
        int l = -1;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(arr[mid] == target){
                l = mid;
                s = mid+1;
            }
            else if(arr[mid] > target){
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
        if(f == -1 && l == -1) return 0;
        int count = l-f+1;
        return count;
    }
};
