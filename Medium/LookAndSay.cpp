string solve(int n) {
    string s = "1";
    for (int i = 0; i < n-1; i++) {
        string st = "";
        int prev = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i-1]) {
                st = st + to_string(i-prev) + s[i-1];
                prev = i;
            }
        }
        st = st + to_string(s.size()-prev) + s[s.size()-1];
        s = st;
    }
    return s;
}
