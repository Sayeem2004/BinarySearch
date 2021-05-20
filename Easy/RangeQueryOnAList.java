import java.util.*;

class RangeSum {
    public int[] pre;

    public RangeSum(int[] nums) {
        pre = new int[nums.length+1];
        pre[0] = 0;
        for (int i = 0; i < nums.length; i++)
            pre[i+1] = pre[i]+nums[i];
    }

    public int total(int i, int j) {
        return pre[j] - pre[i];
    }
}
