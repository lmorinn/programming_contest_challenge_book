int triangle(const vector<int> &l) {
    int res = 0;
    int n = int(l.size());

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                int sum = l[i] + l[j] + l[k];
                int mx = max(max(l[i], l[j]), l[k]);
                int p = sum - mx;
                if (mx < p) {
                    res = max(res, sum);
                }
            }
        }
    }

    return res;
}