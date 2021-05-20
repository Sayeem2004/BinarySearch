int solve(vector<int>& nums) {
    int ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        for (int q = i+1; q < nums.size(); q++) {
            if (nums[i] == nums[q]) ans++;
        }
    }
    return ans+nums.size();
}
