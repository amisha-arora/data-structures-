class Solution(object):
    def rotate(self, matrix):
        row=len(matrix)
        for i in range(0,row):
            for j in range(0,i):
                #for swapping the elements or for transposing the matrix
               matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]
        for i in range(0,row): #to reverse the columns
            matrix[i].reverse()        
