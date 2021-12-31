#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

unsigned long long solve(std::vector<unsigned long long> numbers, int k) {
    std::sort(numbers.begin(), numbers.end(), std::greater<unsigned long long>());

    int sol = 0;
    for (int i = 0; i < k; ++i) {
        sol += numbers[i + k] / numbers[i];
    }

    return sol + std::accumulate(numbers.begin() + 2 * k, numbers.end(), 0);
}

#ifndef TESTING
int T, N, K;
long long x;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<unsigned long long> input;
        std::cin >> N >> K;
        for (int i = 0; i < N; ++i) {
            std::cin >> x;
            input.push_back(x);
        }
        std::cout << solve(input, K) << std::endl;
    }
    
    return 0;
}
#endif
