#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

long long solve(int n, std::string_view str) {
    std::vector<int> sum;
    sum.push_back(0);
    for (const auto& c : str) {
        sum.push_back(sum.back() + c - '0');
    }
    std::map<long long, long long> sums;
    for (int i = 0; i <= n; ++i) {
        if (sums.find(sum[i] - i) != sums.end()) {
            sums[sum[i] - i]++;
        }
        else {
            sums.insert({sum[i] - i, 1});
        }
    }

    long long sol = 0;
    for (const auto& nr : sums) {
        sol += nr.second * (nr.second - 1) / 2;
    }

    return sol;
}

#ifndef TESTING
int T, N;
std::string input;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> N;
        std::cin >> input;
        std::cout << solve(N, input) << std::endl;
    }
    return 0;
}
#endif
