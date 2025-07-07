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
  bundledCode: "#line 1 \"C2_1/1/SubsetSum.hpp\"\n\nbool subset_sum(int i, int sum,\
    \ int k, const vector<int> &a) {\n    if (i == int(a.size())) {\n        return\
    \ sum == k;\n    }\n    return subset_sum(i + 1, sum, k, a) or subset_sum(i +\
    \ 1, sum + a[i], k, a);\n}\n"
  code: "\nbool subset_sum(int i, int sum, int k, const vector<int> &a) {\n    if\
    \ (i == int(a.size())) {\n        return sum == k;\n    }\n    return subset_sum(i\
    \ + 1, sum, k, a) or subset_sum(i + 1, sum + a[i], k, a);\n}"
  dependsOn: []
  isVerificationFile: false
  path: C2_1/1/SubsetSum.hpp
  requiredBy: []
  timestamp: '2025-07-08 01:32:54+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: C2_1/1/SubsetSum.hpp
layout: document
title: "\u90E8\u5206\u548C\u554F\u984C"
---
