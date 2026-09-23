class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        // code here
        int n = matrix.size();
        for(int i=0; i<n; i++){
        reverse(matrix[i].begin(),matrix[i].end());
        }
        for(int i = 0; i<n; i++){
            for(int j =0; j<i; j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
};
