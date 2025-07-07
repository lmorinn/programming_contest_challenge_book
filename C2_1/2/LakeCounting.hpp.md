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
  bundledCode: "#line 1 \"C2_1/2/LakeCounting.hpp\"\nint lake_counting(const vector<vector<char>>\
    \ &s) {\n    int h = int(s.size());\n    if (h == 0) return 0;\n    int w = int(s[0].size());\n\
    \n    vector<int> dy = {0, -1, 0, 1};\n    vector<int> dx = {1, 0, -1, 0};\n \
    \   vector<vector<bool>> seen(h, vector<bool>(w, false));\n    int res = 0;\n\
    \    for (int i = 0; i < h; i++) {\n        for (int j = 0; j < w; j++) {\n  \
    \          if (seen[i][j] or s[i][j] != 'W') continue;\n            res++;\n \
    \           // bfs\n            queue<int> q;\n            q.push(i * w + j);\n\
    \            seen[i][j] = 1;\n            while (!q.empty()) {\n             \
    \   int id = q.front();\n                q.pop();\n                int y = id\
    \ / w;\n                int x = id % w;\n                for (int k = 0; k < 4;\
    \ k++) {\n                    int ny = y + dy[k];\n                    int nx\
    \ = x + dx[k];\n                    if (!(0 <= ny and ny < h and 0 <= nx and nx\
    \ < w) or\n                        seen[ny][nx] or s[ny][nx] != 'W') {\n     \
    \                   continue;\n                    }\n                    seen[ny][nx]\
    \ = 1;\n                    q.push(ny * w + nx);\n                }\n        \
    \    }\n        }\n    }\n    return res;\n}\n"
  code: "int lake_counting(const vector<vector<char>> &s) {\n    int h = int(s.size());\n\
    \    if (h == 0) return 0;\n    int w = int(s[0].size());\n\n    vector<int> dy\
    \ = {0, -1, 0, 1};\n    vector<int> dx = {1, 0, -1, 0};\n    vector<vector<bool>>\
    \ seen(h, vector<bool>(w, false));\n    int res = 0;\n    for (int i = 0; i <\
    \ h; i++) {\n        for (int j = 0; j < w; j++) {\n            if (seen[i][j]\
    \ or s[i][j] != 'W') continue;\n            res++;\n            // bfs\n     \
    \       queue<int> q;\n            q.push(i * w + j);\n            seen[i][j]\
    \ = 1;\n            while (!q.empty()) {\n                int id = q.front();\n\
    \                q.pop();\n                int y = id / w;\n                int\
    \ x = id % w;\n                for (int k = 0; k < 4; k++) {\n               \
    \     int ny = y + dy[k];\n                    int nx = x + dx[k];\n         \
    \           if (!(0 <= ny and ny < h and 0 <= nx and nx < w) or\n            \
    \            seen[ny][nx] or s[ny][nx] != 'W') {\n                        continue;\n\
    \                    }\n                    seen[ny][nx] = 1;\n              \
    \      q.push(ny * w + nx);\n                }\n            }\n        }\n   \
    \ }\n    return res;\n}\n"
  dependsOn: []
  isVerificationFile: false
  path: C2_1/2/LakeCounting.hpp
  requiredBy: []
  timestamp: '2025-07-08 01:33:15+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: C2_1/2/LakeCounting.hpp
layout: document
title: Lake Counting
---
