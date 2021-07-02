class Solution:
    def solve(self, nums):
        ret = [0]*(len(nums)+1)
        ret[0] = 1;
        nums.reverse();
        for i,x in enumerate(nums):
            ret[i] += x;
            if (ret[i] >= 10):
                ret[i] %= 10;
                ret[i+1] += 1;
        if (ret[len(nums)] > 0):
            ret.reverse();
            return ret;
        ret.reverse();
        return ret[1:];
