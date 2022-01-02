#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

std::string solve(const std::string& biagram) {
    int i = 3;
    std::string sol = biagram.substr(0, 2);
    bool found = false;
    while (i < biagram.size()) {
        std::string next = biagram.substr(i, 2);
        if (next[0] != sol.back()) {
            sol += next[0];
            found = true;
        }
        sol += next[1];
        i += 3;
    }

    if (!found) {
        sol += "a";
    }

    return sol;
}

#ifndef TESTING
int T, N;
std::string line;

inline std::istream &skip_endl(std::istream &is) { return is.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); }

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T >> skip_endl;
    for (int t = 0; t < T; ++t) {
        std::cin >> N >> skip_endl;
        getline(std::cin, line);
        std::cout << solve(line) << std::endl;
    }
    
    return 0;
}
#endif
