#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

std::vector<long long> solve(long long n, long long x, long long y) {
    long long diff = y - x;
    int nrDiff = n - 1;

    int i = nrDiff;
    while (i >= 1 && diff % i > 0) {
        i--;
    }

    int actualDiff = diff / i;
    std::vector<long long> sol;
    int k = y;
    while (sol.size() < n && k > 0) {
        sol.push_back(k);
        k -= actualDiff;
    }
    k = y + actualDiff;
    while (sol.size() < n) {
        sol.push_back(k);
        k += actualDiff;
    }
    return sol;
}

#ifndef TESTING
int T;
long long X, Y, N;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> N >> X >> Y;
        auto sol = solve(N, X, Y);
        for (const auto it : sol) {
            std::cout << it << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
#endif
