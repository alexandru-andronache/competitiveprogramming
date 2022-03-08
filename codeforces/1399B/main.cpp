#include <iostream>
#include <vector>
#include <algorithm>

long long solve(const std::vector<long long>& a, const std::vector<long long>& b) {
    long long minA = *(std::min_element(a.begin(), a.end()));
    long long minB = *(std::min_element(b.begin(), b.end()));

    long long sol = 0;
    for (int i = 0; i < a.size(); ++i) {
        sol += std::max(a[i] - minA, b[i] - minB);
    }
    return sol;
}

#ifndef TESTING
int T, N;
long long x;

int main() {

    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d", &N);
        std::vector<long long> a(N, 0);
        std::vector<long long> b(N, 0);
        for (int i = 0; i < N; ++i) {
            scanf("%lld", &x);
            a[i] = x;
        }
        for (int i = 0; i < N; ++i) {
            scanf("%lld", &x);
            b[i] = x;
        }
        std::cout << solve(a, b) << std::endl;
    }

    return 0;
}
#endif
