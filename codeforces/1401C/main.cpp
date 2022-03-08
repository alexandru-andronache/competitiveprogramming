#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

std::string solve(std::vector<long long> numbers) {
    long long min = *(std::min_element(numbers.begin(), numbers.end()));
    std::vector<long long> div;

    long long last = -1;
    for (const auto& e : numbers) {
        if (e % min == 0) {
            div.push_back(e);
        }
        else {
            if (last > e) {
                return "NO";
            }
            last = e;
        }
    }
    std::sort(div.begin(), div.end());

    auto it = div.begin();
    for (auto& e : numbers) {
        if (e % min == 0) {
            e = *it;
            it++;
        }
    }

    int prev = -1;
    for (const auto& e : numbers) {
        if (e < prev) {
            return "NO";
        }
        prev = e;
    }

    return "YES";
}

#ifndef TESTING
int T, N;
long long x;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<long long> numbers;
        std::cin >> N;
        for (int i = 0; i < N; ++i) {
            std::cin >> x;
            numbers.push_back(x);
        }
        std::cout << solve(numbers) << std::endl;
    }
    return 0;
}
#endif
