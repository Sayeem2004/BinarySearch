int solve(vector<int>& a, vector<int>& b) {
    for (int i = 0; i < b.size()-1; i++) {
        if (b[i] == a[i+1]) return a[i];
        if (a[i] == b[i+1]) return b[i];
    }
    return 0;
}
