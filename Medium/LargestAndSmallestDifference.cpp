int solve(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int ans = 1000000000;
    for (int i = 0; i <= nums.size()-k; i++) {
        ans = min(ans,nums[i+k-1]-nums[i]);
    }
    return ans;
}
