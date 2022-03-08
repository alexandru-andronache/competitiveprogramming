#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <array>

int solve(int n, const std::vector<int>& bosses) {
    std::array<std::vector<int>, 2> dp;
    dp.fill(std::vector<int>(bosses.size(), 0));
    dp[0][0] = bosses[0];
    dp[1][0] = 1;
    if (n > 1) {
        dp[0][1] = bosses[0] + bosses[1];
        dp[1][1] = dp[0][0];
    }
    if (n > 2) {
        dp[0][2] = bosses[2] + dp[1][1];
        dp[1][2] = dp[0][0];
    }
    for (int i = 3; i < bosses.size(); ++i) {
        dp[0][i] = std::min(dp[1][i - 1] + bosses[i], dp[1][i - 2] + bosses[i] + bosses[i - 1]);
        dp[1][i] = std::min(dp[0][i - 1], dp[0][i - 2]);
    }
    return std::min(dp[0][n - 1], dp[1][n - 1]);
}

#ifndef TESTING
int T, N;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<int> bosses;
        std::cin >> N;
        for (int i = 0; i < N; ++i) {
            int x;
            std::cin >> x;
            bosses.push_back(x);
        }
        std::cout << solve(N, bosses) << std::endl;
    }
    return 0;
}
#endif
