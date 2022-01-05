#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

std::vector<unsigned long long> solve(const std::vector<unsigned long long>& numbers) {
    return {numbers[0], numbers[1], numbers.back() - numbers[1] - numbers[0]};
}

#ifndef TESTING
int T, N;
unsigned long long x;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<unsigned long long> numbers;
        for (int i = 0; i < 7; ++i) {
            std::cin >> x;
            numbers.push_back(x);
        }
        auto result = solve(numbers);
        for (const auto &nr : result) {
            std::cout << nr << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
#endif
