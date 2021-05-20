class Solution:
    def solve(self, n):
        while (n >= 10):
            sm = 0;
            for i in str(n):
                sm += int(i);
            n = sm;
        return n;
