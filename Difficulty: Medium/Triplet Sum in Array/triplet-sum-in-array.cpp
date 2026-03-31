class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i < n-2; i++){
            int t = target - arr[i];
            int s = i+1;
            int e = n-1;
            while(s < e){
                int reqt = arr[s] + arr[e];
                if(reqt == t) return true;
                else if(reqt > t) e--;
                else s++;
            }
        }
        return false;
    }
};