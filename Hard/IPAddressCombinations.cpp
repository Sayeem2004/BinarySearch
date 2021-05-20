vector<string> solve(string ip) {
    set<string> s;
    int n = ip.size();
    for (int i = 1; i <= n-3; i++) {
        for (int q = i+1; q <= n-2; q++) {
            for (int r = q+1; r <= n-1; r++) {
                string s1 = ip.substr(0,i);
                string s2 = ip.substr(i,q-i);
                string s3 = ip.substr(q,r-q);
                string s4 = ip.substr(r);
                bool a = true;
                if (s1[0] == '0' && s1.size() != 1) a = false;
                if (stoi(s1) > 255) a = false;
                if (s2[0] == '0' && s2.size() != 1) a = false;
                if (stoi(s2) > 255) a = false;
                if (s3[0] == '0' && s3.size() != 1) a = false;
                if (stoi(s3) > 255) a = false;
                if (s4[0] == '0' && s4.size() != 1) a = false;
                if (stoi(s4) > 255) a = false;
                if (a)
                    s.insert(s1 + "." + s2 + "." + s3 + "." + s4);
            }
        }
    }
    vector<string> v;
    for (auto x : s)
        v.push_back(x);
    return v;
}
