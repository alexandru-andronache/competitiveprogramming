#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>

unsigned long long solve(const std::vector<unsigned long long>& numbers) {
    for (int start = 0; start < 2; ++start) {
        unsigned long long sol = numbers[start];
        for (int i = start; i < numbers.size(); i += 2) {
            sol = std::gcd(sol, numbers[i]);
        }

        bool found = true;
        for (int i = (start + 1) % 2; i < numbers.size(); i += 2) {
            found = found && (numbers[i] % sol != 0);
        }

        if (found) {
            return sol;
        }   
    }

    return 0;
}

#ifndef TESTING
int T, N;
long long x;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<unsigned long long> input;
        std::cin >> N;
        for (int i = 0; i < N; ++i) {
            std::cin >> x;
            input.push_back(x);
        }
        std::cout << solve(input) << std::endl;
    }
    
    return 0;
}
#endif
