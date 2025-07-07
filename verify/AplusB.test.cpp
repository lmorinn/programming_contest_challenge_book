#include "../Sample/AplusB.hpp"
#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include <iostream>
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << AplusB(a, b) << '\n';
}