class Solution {
  public:
    int minTime(vector<int>& arr, int k){
        int n = arr.size();
        if(n < k) return -1;
        long long start = 0;
        long long end = 0;
        long long mid, ans;
        for(int i = 0; i < n; i++){
            if(start < arr[i]){
                start = arr[i];
            }
            end += arr[i];
        }
        
        while(start <= end){
            mid = start+(end-start)/2;
            long long pages = 0;
            long long count = 1;
            for(int i = 0; i < n; i++){
                pages += arr[i];
                if(pages > mid){
                    count++;
                    pages = arr[i];
                }
            }
            if(count <= k){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return ans;
    }
};