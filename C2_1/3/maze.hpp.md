---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 1 \"C2_1/3/maze.hpp\"\nint maze(const vector<vector<char>> &s)\
    \ {\n    int h = int(s.size());\n    if (h == 0) return -1;\n    int w = int(s[0].size());\n\
    \n    vector<int> dy = {0, -1, 0, 1};\n    vector<int> dx = {1, 0, -1, 0};\n\n\
    \    vector<vector<int>> dist(h, vector<int>(w, -1));\n\n    int start = -1, goal\
    \ = -1;\n    for (int i = 0; i < h; i++) {\n        for (int j = 0; j < w; j++)\
    \ {\n            if (s[i][j] == 'S') {\n                start = i * w + j;\n \
    \           } else if (s[i][j] == 'G') {\n                goal = i * w + j;\n\
    \            }\n        }\n    }\n\n    if (start == -1 or goal == -1) {\n   \
    \     return -1;\n    }\n\n    dist[start / w][start % w] = 0;\n    queue<int>\
    \ q;\n    q.push(start);\n\n    while (!q.empty()) {\n        int id = q.front();\n\
    \        q.pop();\n        int y = id / w;\n        int x = id % w;\n\n      \
    \  for (int k = 0; k < 4; k++) {\n            int ny = y + dy[k];\n          \
    \  int nx = x + dx[k];\n            if (!(0 <= ny and ny < h and 0 <= nx and nx\
    \ < w) or\n                s[ny][nx] == '#' or dist[ny][nx] != -1) {\n       \
    \         continue;\n            }\n            dist[ny][nx] = dist[y][x] + 1;\n\
    \            q.push(ny * w + nx);\n        }\n    }\n\n    return dist[goal /\
    \ w][goal % w];\n}\n"
  code: "int maze(const vector<vector<char>> &s) {\n    int h = int(s.size());\n \
    \   if (h == 0) return -1;\n    int w = int(s[0].size());\n\n    vector<int> dy\
    \ = {0, -1, 0, 1};\n    vector<int> dx = {1, 0, -1, 0};\n\n    vector<vector<int>>\
    \ dist(h, vector<int>(w, -1));\n\n    int start = -1, goal = -1;\n    for (int\
    \ i = 0; i < h; i++) {\n        for (int j = 0; j < w; j++) {\n            if\
    \ (s[i][j] == 'S') {\n                start = i * w + j;\n            } else if\
    \ (s[i][j] == 'G') {\n                goal = i * w + j;\n            }\n     \
    \   }\n    }\n\n    if (start == -1 or goal == -1) {\n        return -1;\n   \
    \ }\n\n    dist[start / w][start % w] = 0;\n    queue<int> q;\n    q.push(start);\n\
    \n    while (!q.empty()) {\n        int id = q.front();\n        q.pop();\n  \
    \      int y = id / w;\n        int x = id % w;\n\n        for (int k = 0; k <\
    \ 4; k++) {\n            int ny = y + dy[k];\n            int nx = x + dx[k];\n\
    \            if (!(0 <= ny and ny < h and 0 <= nx and nx < w) or\n           \
    \     s[ny][nx] == '#' or dist[ny][nx] != -1) {\n                continue;\n \
    \           }\n            dist[ny][nx] = dist[y][x] + 1;\n            q.push(ny\
    \ * w + nx);\n        }\n    }\n\n    return dist[goal / w][goal % w];\n}"
  dependsOn: []
  isVerificationFile: false
  path: C2_1/3/maze.hpp
  requiredBy: []
  timestamp: '2025-07-08 01:44:50+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: C2_1/3/maze.hpp
layout: document
title: "\u8FF7\u8DEF\u306E\u6700\u77ED\u8DEF"
---
