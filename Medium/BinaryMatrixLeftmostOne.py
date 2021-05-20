class Solution:
    def solve(self, matrix):
        if (len(matrix) == 0): return -1;
        n = len(matrix[0])
        matrix = [sum(m) for m in matrix];
        if (max(matrix) == 0): return -1;
        return n-max(matrix);
