int lake_counting(const vector<vector<char>> &s) {
    int h = int(s.size());
    if (h == 0) return 0;
    int w = int(s[0].size());

    vector<int> dy = {0, -1, 0, 1};
    vector<int> dx = {1, 0, -1, 0};
    vector<vector<bool>> seen(h, vector<bool>(w, false));
    int res = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (seen[i][j] or s[i][j] != 'W') continue;
            res++;
            // bfs
            queue<int> q;
            q.push(i * w + j);
            seen[i][j] = 1;
            while (!q.empty()) {
                int id = q.front();
                q.pop();
                int y = id / w;
                int x = id % w;
                for (int k = 0; k < 4; k++) {
                    int ny = y + dy[k];
                    int nx = x + dx[k];
                    if (!(0 <= ny and ny < h and 0 <= nx and nx < w) or
                        seen[ny][nx] or s[ny][nx] != 'W') {
                        continue;
                    }
                    seen[ny][nx] = 1;
                    q.push(ny * w + nx);
                }
            }
        }
    }
    return res;
}
