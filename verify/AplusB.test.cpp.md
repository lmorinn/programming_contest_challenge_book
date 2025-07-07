---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Sample/AplusB.hpp
    title: Sample/AplusB.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/aplusb
    links:
    - https://judge.yosupo.jp/problem/aplusb
  bundledCode: "#line 1 \"Sample/AplusB.hpp\"\nint AplusB(int A, int B) {\n    return\
    \ A + B;\n}\n#line 2 \"verify/AplusB.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\
    \n#include <iostream>\nint main() {\n    int a, b;\n    std::cin >> a >> b;\n\
    \    std::cout << AplusB(a, b) << '\\n';\n}\n"
  code: "#include \"../Sample/AplusB.hpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/aplusb\"\
    \n#include <iostream>\nint main() {\n    int a, b;\n    std::cin >> a >> b;\n\
    \    std::cout << AplusB(a, b) << '\\n';\n}"
  dependsOn:
  - Sample/AplusB.hpp
  isVerificationFile: true
  path: verify/AplusB.test.cpp
  requiredBy: []
  timestamp: '2025-07-07 23:59:09+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify/AplusB.test.cpp
layout: document
redirect_from:
- /verify/verify/AplusB.test.cpp
- /verify/verify/AplusB.test.cpp.html
title: verify/AplusB.test.cpp
---
