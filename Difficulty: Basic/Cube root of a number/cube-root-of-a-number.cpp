class Solution {
  public:
    int cubeRoot(int n) {
        if(n < 2) return n;
        int s = 0;
        int e = n;
        int ans = 0;
        while(s <= e){
            int mid = s+(e-s)/2;
            if(mid == n/(mid*mid)){
                ans = mid;
                break;
            }
            else if(mid < n/(mid*mid)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
};