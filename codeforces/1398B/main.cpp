#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

long long solve(std::string_view str) {
    std::vector<int> nr;
    int current = 0;
    for (const auto& c : str) {
        if (c == '0' && current > 0) {
            nr.emplace_back(current);
            current = 0;
        }
        else if (c == '1') {
            current++;
        }
    }
    if (current > 0) {
        nr.emplace_back(current);
    }

    std::sort(nr.begin(), nr.end(), [](int l, int r){
        return l > r;
    });

    int sol = 0;
    for (int i = 0; i < nr.size(); i = i + 2) {
        sol += nr[i];
    }

    return sol;
}

#ifndef TESTING
int T;
std::string input;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> input;
        std::cout << solve(input) << std::endl;
    }
    return 0;
}
#endif
