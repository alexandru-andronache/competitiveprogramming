#include <iostream>
#include <vector>
#include <algorithm>

long long solve(std::vector<long long> a) {
    std::sort(a.begin(), a.end());

    int max = 0;
    for (int i = 0; i < a.size(); ++i) {
        for (int j = i + 1; j < a.size(); ++j) {
            int sum = a[i] + a[j];
            int li = i + 1, ls = j - 1;
            int nr = 1;
            while (li < ls) {
                if (a[li] + a[ls] == sum) {
                    li++;
                    ls--;
                    nr++;
                }
                else if (a[li] + a[ls] < sum) {
                    li++;
                }
                else {
                    ls--;
                }
            }
            max = std::max(nr, max);
        }
    }

    return max;
}

#ifndef TESTING
int T, N;
long long x;

int main() {

    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d", &N);
        std::vector<long long> a(N, 0);
        for (int i = 0; i < N; ++i) {
            scanf("%lld", &x);
            a[i] = x;
        }
        std::cout << solve(a) << std::endl;
    }

    return 0;
}
#endif
