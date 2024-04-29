class Solution(object):
    def spiralOrder(self, matrix):
        ans = []
        if not matrix or not matrix[0]: # Check if matrix is empty
            return ans
        row_start, row_end = 0, len(matrix) - 1
        col_start, col_end = 0, len(matrix[0]) - 1
        
        while row_start <= row_end and col_start <= col_end:
            # Traverse row from left to right
            for col in range(col_start, col_end + 1):
                ans.append(matrix[row_start][col])
            row_start += 1
            
            # Traverse column from top to bottom
            for row in range(row_start, row_end + 1):
                ans.append(matrix[row][col_end])
            col_end -= 1
            
            # Traverse row from right to left
            if row_start <= row_end:
                for col in range(col_end, col_start - 1, -1):
                    ans.append(matrix[row_end][col])
                row_end -= 1
            
            # Traverse column from bottom to top
            if col_start <= col_end:
                for row in range(row_end, row_start - 1, -1):
                    ans.append(matrix[row][col_start])
                col_start += 1
        
        return ans
