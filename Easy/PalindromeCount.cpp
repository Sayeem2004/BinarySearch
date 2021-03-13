int solve(string s, int k) {
    set<char> st;
    int count = 0;
    for (auto x : s) {
        if (st.find(x) == st.end()) {
            st.insert(x); count++;
        }
    }
    return pow(count,(k+1)/2);
}
