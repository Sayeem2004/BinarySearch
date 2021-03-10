int solve(vector<vector<int>>& intervals, int point) {
    int count = 0;
    for (auto x : intervals) {
        if (x[0] <= point && x[1] >= point) count++;
    }
    return count;
}
