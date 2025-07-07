bool lottery(const vector<int>& k, int m) {
    int n = int(k.size());
    vector<int> s(n * n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            s[i * n + j] = k[i] + k[j];
        }
    }

    sort(s.begin(), s.end());
    for (int i = 0; i < n * n; i++) {
        if (binary_search(s.begin(), s.end(), m - s[i])) {
            return true;
        }
    }

    return false;
}