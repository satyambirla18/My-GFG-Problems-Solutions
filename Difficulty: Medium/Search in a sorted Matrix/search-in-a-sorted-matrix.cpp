class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int x) {
        int r = mat.size();
        int c = mat[0].size();
        int i = 0;
        int j = c-1;
        while(i <= r-1 && j >= 0){
            if(mat[i][j]==x){
                return true;
            }
            else if(mat[i][j]>x){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};