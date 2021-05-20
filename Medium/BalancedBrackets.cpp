bool solve(string s) {
    int l = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') l++;
        if (s[i] == ')') l--;
        if (l < 0) return false;
    }
    if (l == 0) return true;
    return false;
}
