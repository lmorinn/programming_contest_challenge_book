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
  bundledCode: "#line 1 \"C1_6/1/triangle.hpp\"\nint triangle(const vector<int> &l)\
    \ {\n    int res = 0;\n    int n = int(l.size());\n\n    for (int i = 0; i < n;\
    \ i++) {\n        for (int j = i + 1; j < n; j++) {\n            for (int k =\
    \ j + 1; k < n; k++) {\n                int sum = l[i] + l[j] + l[k];\n      \
    \          int mx = max(max(l[i], l[j]), l[k]);\n                int p = sum -\
    \ mx;\n                if (mx < p) {\n                    res = max(res, sum);\n\
    \                }\n            }\n        }\n    }\n\n    return res;\n}\n"
  code: "int triangle(const vector<int> &l) {\n    int res = 0;\n    int n = int(l.size());\n\
    \n    for (int i = 0; i < n; i++) {\n        for (int j = i + 1; j < n; j++) {\n\
    \            for (int k = j + 1; k < n; k++) {\n                int sum = l[i]\
    \ + l[j] + l[k];\n                int mx = max(max(l[i], l[j]), l[k]);\n     \
    \           int p = sum - mx;\n                if (mx < p) {\n               \
    \     res = max(res, sum);\n                }\n            }\n        }\n    }\n\
    \n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: C1_6/1/triangle.hpp
  requiredBy: []
  timestamp: '2025-07-08 00:32:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: C1_6/1/triangle.hpp
layout: document
title: "\u4E09\u89D2\u5F62"
---
