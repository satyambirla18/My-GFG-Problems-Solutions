// User function template for C++

class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        int n = arr.size();
        int s = 0;
        int e = n-1;
        int f = -1;
        while(s <= e){
            int m = s+(e-s)/2;
            if(arr[m] == 0){
                f = m;
                e = m-1;
            }
            else if(arr[m] > 0){
                s = m+1;
            }
            else{
                e = m-1;
            }
        }
        return n-f;
    }
};