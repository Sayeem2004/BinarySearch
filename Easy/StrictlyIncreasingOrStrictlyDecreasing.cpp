bool solve(vector<int>& nums) {
    bool x = true;
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] <= nums[i+1]) x = false;
    }
    if (x) return true;
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i] >= nums[i+1]) return false;
    }
    return true;
}
