int solve(vector<int>& nums, int k) {
    multiset<int> s;
    for (int n : nums) s.insert(n);
    auto itr = s.lower_bound(0);
    for (int i = 0; i < k; i++) itr++;
    return *itr;
}
