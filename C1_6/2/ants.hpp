pair<int, int> ants(const vector<int> &x, int l) {
    int n = int(x.size());
    int mi = 0, ma = 0;
    for (int i = 0; i < n; i++) {
        mi = max(mi, min(x[i], l - x[i]));
    }
    for (int i = 0; i < n; i++) {
        ma = max(ma, max(x[i], l - x[i]));
    }
    return {mi, ma};
}