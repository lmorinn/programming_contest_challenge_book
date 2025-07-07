
bool subset_sum(int i, int sum, int k, const vector<int> &a) {
    if (i == int(a.size())) {
        return sum == k;
    }
    return subset_sum(i + 1, sum, k, a) or subset_sum(i + 1, sum + a[i], k, a);
}