// User function template for C++

class Solution {
  public:
    int sumOfMatrix(int N, int M, vector<vector<int>> Grid) {
        int sum = 0;
        for (int i = 0; i < Grid.size(); i++) {
            for (int j = 0; j < Grid[i].size(); j++) {
                sum += Grid[i][j];
            }
        }
        return sum;
    }
};