#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

long long solve(long long a, long long b, long long x, long long y, long long n) {
    if (a - x + b - y <= n) {
        return x * y;
    }
    long long min = std::numeric_limits<long long>::max();
    if (a - x >= n) {
        min = std::min(min, b* (a - n));
    }
    else {
        min = std::min(min, x * (b - (n - (a - x))));
    }
    if (b - y >= n) {
        min = std::min(min, a * (b - n));
    }
    else {
        min = std::min(min, y * (a - (n - (b - y))));
    }
    return min;
}

#ifndef TESTING
int T;
long long A, B, X, Y, N;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> A >> B >> X >> Y >> N;
        std::cout << solve(A, B, X, Y, N) << std::endl;
    }
    return 0;
}
#endif
