class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row=matrix.size();
        for(int i=0;i<row;i++){
            for(int j=0;j<=i;j++){
                //for swapping the elements or for transposing the matrix
                swap(matrix[i][j],matrix[j][i]);
            }
        }//to reverse the columns
        for(int i=0;i<row;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};
