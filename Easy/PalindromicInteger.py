class Solution:
    def solve(self, num):
        s = str(num);
        return s[:len(s)//2] == s[(len(s)//2)+(len(s)%2):][::-1];
