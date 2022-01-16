#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>

std::string binary(unsigned long long x) {
    std::string result;
    while (x > 0) {
        result += x % 2 + '0';
        x = x / 2;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

std::string removeLeadingZero(std::string t) {
    int k = 0;
    while (t[k] == '0') {
        k++;
    }
    return t.substr(k);
}

std::string solve(unsigned long long x, unsigned long long y) {
    if (x == y) {
        return "YES";
    }
    std::string start = binary(x);
    std::string end = binary(y);

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            std::string tmp = start;
            tmp.push_back(i + '0');
            std::reverse(tmp.begin(), tmp.end());
            tmp = removeLeadingZero(tmp);
            if (j == 1) {
                std::reverse(tmp.begin(), tmp.end());
            }
            tmp = removeLeadingZero(tmp);
            std::size_t found = end.find(tmp);
            if (found != std::string::npos) {
                bool sol = true;
                for (int i = 0; i < found; ++i) {
                    sol = sol && (end[i] != '0');
                }
                for (int i = found + tmp.size(); i < end.size(); ++i) {
                    sol = sol && (end[i] != '0');
                }
                if (sol) {
                    return "YES";
                }
            }
        }
    }

    return "NO";
}

#ifndef TESTING
unsigned long long x, y;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> x >> y;
    std::cout << solve(x, y);
    
    return 0;
}
#endif
