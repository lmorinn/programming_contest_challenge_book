int maze(const vector<vector<char>> &s) {
    int h = int(s.size());
    if (h == 0) return -1;
    int w = int(s[0].size());

    vector<int> dy = {0, -1, 0, 1};
    vector<int> dx = {1, 0, -1, 0};

    vector<vector<int>> dist(h, vector<int>(w, -1));

    int start = -1, goal = -1;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (s[i][j] == 'S') {
                start = i * w + j;
            } else if (s[i][j] == 'G') {
                goal = i * w + j;
            }
        }
    }

    if (start == -1 or goal == -1) {
        return -1;
    }

    dist[start / w][start % w] = 0;
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int id = q.front();
        q.pop();
        int y = id / w;
        int x = id % w;

        for (int k = 0; k < 4; k++) {
            int ny = y + dy[k];
            int nx = x + dx[k];
            if (!(0 <= ny and ny < h and 0 <= nx and nx < w) or
                s[ny][nx] == '#' or dist[ny][nx] != -1) {
                continue;
            }
            dist[ny][nx] = dist[y][x] + 1;
            q.push(ny * w + nx);
        }
    }

    return dist[goal / w][goal % w];
}