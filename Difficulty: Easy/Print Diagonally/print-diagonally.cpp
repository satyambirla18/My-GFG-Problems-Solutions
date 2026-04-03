class Solution {
  public:
    vector<int> diagView(vector<vector<int>> mat) {
        // code here
        int r = mat.size();
        int c = mat[0].size();
        vector<int> ans;
        
        for(int col = 0; col < c; col++){
            int i = 0;
            int j = col;
            while(i < r && j >= 0){
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        
        for(int row = 1; row < r; row++){
            int i = row;
            int j = c-1;
            while(i < r && j >= 0){
                ans.push_back(mat[i][j]);
                i++;
                j--;
            }
        }
        
        return ans;
    }
};