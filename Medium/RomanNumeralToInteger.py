class Solution:
    def solve(self, numeral):
        dt = {"I":1, "V":5, "X":10, "L":50, "C":100, "D":500, "M":1000}
        i,ans = 0,0;
        while (i < len(numeral)):
            if (i < len(numeral)-1 and dt[numeral[i]] < dt[numeral[i+1]]):
                ans += dt[numeral[i+1]] - dt[numeral[i]];
                i += 2;
            else:
                ans += dt[numeral[i]];
                i += 1;
        return ans;
