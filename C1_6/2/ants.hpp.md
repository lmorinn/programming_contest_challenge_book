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
  bundledCode: "#line 1 \"C1_6/2/ants.hpp\"\npair<int, int> ants(const vector<int>\
    \ &x, int l) {\n    int n = int(x.size());\n    int mi = 0, ma = 0;\n    for (int\
    \ i = 0; i < n; i++) {\n        mi = max(mi, min(x[i], l - x[i]));\n    }\n  \
    \  for (int i = 0; i < n; i++) {\n        ma = max(ma, max(x[i], l - x[i]));\n\
    \    }\n    return {mi, ma};\n}\n"
  code: "pair<int, int> ants(const vector<int> &x, int l) {\n    int n = int(x.size());\n\
    \    int mi = 0, ma = 0;\n    for (int i = 0; i < n; i++) {\n        mi = max(mi,\
    \ min(x[i], l - x[i]));\n    }\n    for (int i = 0; i < n; i++) {\n        ma\
    \ = max(ma, max(x[i], l - x[i]));\n    }\n    return {mi, ma};\n}"
  dependsOn: []
  isVerificationFile: false
  path: C1_6/2/ants.hpp
  requiredBy: []
  timestamp: '2025-07-08 00:44:00+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: C1_6/2/ants.hpp
layout: document
title: Ants
---
