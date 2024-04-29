class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        std::vector<int> ans;
        if (matrix.empty() || matrix[0].empty()) {
            return ans; // Handle empty matrix
        }
        int row_start = 0, row_end = matrix.size() - 1, col_start = 0, col_end = matrix[0].size() - 1;
        while (row_start <= row_end && col_start <= col_end) {
            // for row start
            for (int col = col_start; col <= col_end; col++) {
                ans.push_back(matrix[row_start][col]);
            }
            row_start++;
            // for col_end
            for (int row = row_start; row <= row_end; row++) {
                ans.push_back(matrix[row][col_end]);
            }
            col_end--;
            // for row_end
            if (row_start <= row_end) { // Ensure there are rows left
                for (int col = col_end; col >= col_start; col--) {
                    ans.push_back(matrix[row_end][col]);
                }
                row_end--;
            }
            // for col_start
            if (col_start <= col_end) { // Ensure there are columns left
                for (int row = row_end; row >= row_start; row--) {
                    ans.push_back(matrix[row][col_start]);
                }
                col_start++;
            }
        }
        return ans;
    }
};
