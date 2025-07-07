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
  bundledCode: "#line 1 \"C1_6/3/lottery.hpp\"\nbool lottery(const vector<int>& k,\
    \ int m) {\n    int n = int(k.size());\n    vector<int> s(n * n);\n    for (int\
    \ i = 0; i < n; i++) {\n        for (int j = 0; j < n; j++) {\n            s[i\
    \ * n + j] = k[i] + k[j];\n        }\n    }\n\n    sort(s.begin(), s.end());\n\
    \    for (int i = 0; i < n * n; i++) {\n        if (binary_search(s.begin(), s.end(),\
    \ m - s[i])) {\n            return true;\n        }\n    }\n\n    return false;\n\
    }\n"
  code: "bool lottery(const vector<int>& k, int m) {\n    int n = int(k.size());\n\
    \    vector<int> s(n * n);\n    for (int i = 0; i < n; i++) {\n        for (int\
    \ j = 0; j < n; j++) {\n            s[i * n + j] = k[i] + k[j];\n        }\n \
    \   }\n\n    sort(s.begin(), s.end());\n    for (int i = 0; i < n * n; i++) {\n\
    \        if (binary_search(s.begin(), s.end(), m - s[i])) {\n            return\
    \ true;\n        }\n    }\n\n    return false;\n}"
  dependsOn: []
  isVerificationFile: false
  path: C1_6/3/lottery.hpp
  requiredBy: []
  timestamp: '2025-07-08 00:54:40+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: C1_6/3/lottery.hpp
layout: document
title: "\u30CF\u30FC\u30C9\u30EB\u304C\u4E0A\u304C\u3063\u305F\u300C\u304F\u3058\u3073\
  \u304D\u300D"
---
