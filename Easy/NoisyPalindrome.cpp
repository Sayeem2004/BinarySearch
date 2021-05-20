bool solve(string s) {
    string s2 = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i]-'a' >= 0) s2 += s[i];
    }
    for (int i = 0; i < s2.size()/2; i++) {
        if (s2[i] != s2[s2.size()-i-1]) return false;
    }
    return true;
}
