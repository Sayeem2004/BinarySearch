vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int> v(a.size()+b.size());
    for (int i = 0; i < a.size(); i++) {
        v[i] = a[i];
    }
    for (int i = 0; i < b.size(); i++) {
        v[i+a.size()] = b[i];
    }
    sort(v.begin(),v.end());
    return v;
}
