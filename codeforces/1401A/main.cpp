#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

long long solve(long long n, long long k) {
    if (n <= k) {
        return k - n;
    }
    if ((n + k) % 2 == 0) {
        return 0;
    }
    return 1;
}

#ifndef TESTING
int T;
long long N, K;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> N >> K;
        std::cout << solve(N, K) << std::endl;
    }
    return 0;
}
#endif
