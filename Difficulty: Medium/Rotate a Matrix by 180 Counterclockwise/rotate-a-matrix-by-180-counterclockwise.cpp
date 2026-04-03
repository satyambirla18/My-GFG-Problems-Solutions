class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat){
        int n = mat.size();
        int num_90rotation = 180/90;
        
        for(int k = 0; k < num_90rotation; k++){
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }
    
            for(int i = 0; i < n; i++){
                reverse(mat[i].begin(), mat[i].end());
            }
        }
    }
};