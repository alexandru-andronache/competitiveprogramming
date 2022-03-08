#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

std::optional<std::tuple<int, int, int>> solve(const std::vector<long long>& points) {
    int sum = points[0] + points[1];
    for (int i = 2; i < points.size(); ++i) {
        if (points[i] >= sum) {
            return {{1, 2, i + 1}};
        }
    }
    return {};
}

#ifndef TESTING
int T, N;
long long x;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<long long> input;
        std::cin >> N;
        for (int i = 0; i < N; ++i) {
            std::cin >> x;
            input.push_back(x);
        }
        auto sol = solve(input);
        if (sol.has_value()) {
            auto [x, y, z] = sol.value();
            std::cout << x << " " << y << " " << z << std::endl;
        }
        else {
            std::cout << "-1" << std::endl;
        }

    }
    return 0;
}
#endif
