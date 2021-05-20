vector<vector<int>> solve(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int prev = 0;
    vector<vector<int>> ans;
    if (nums.size() == 0) return ans;
    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[i-1]+1) {
            vector<int> temp(2);
            temp[0] = nums[prev];
            temp[1] = nums[i-1];
            ans.push_back(temp);
            prev = i;
        }
    }
    vector<int> temp(2);
    temp[0] = nums[prev];
    temp[1] = nums[nums.size()-1];
    ans.push_back(temp);
    return ans;
}
