#include <iostream>
#include <vector>
#include <algorithm>

long long solve(std::vector<int> red, std::vector<int> green, std::vector<int> blue) {
    std::sort(red.begin(), red.end(), [](int a, int b) {
        return a > b;
    });
    std::sort(green.begin(), green.end(), [](int a, int b) {
        return a > b;
    });
    std::sort(blue.begin(), blue.end(), [](int a, int b) {
        return a > b;
    });

    std::vector<std::vector<std::vector<int>>> dp;
    for (int i = 0; i < red.size() + 1; ++i) {
        std::vector<std::vector<int>> t;
        for (int j = 0; j < green.size() + 1; ++j) {
            std::vector<int> tmp;
            for (int k = 0; k < blue.size() + 1; ++k) {
                tmp.push_back(0);
            }
            t.push_back(tmp);
        }
        dp.push_back(t);
    }

    for (int i = 0; i <= red.size(); ++i) {
        for (int j = 0; j <= green.size(); ++j) {
            for (int k = 0; k <= blue.size(); ++k) {
                if (i > 0 && j > 0) {
                    dp[i][j][k] = std::max(dp[i][j][k], dp[i - 1][j - 1][k] + red[i - 1] * green[j - 1]);
                }
                if (i > 0 && k > 0) {
                    dp[i][j][k] = std::max(dp[i][j][k], dp[i - 1][j][k - 1] + red[i - 1] * blue[k - 1]);
                }
                if (j > 0 && k > 0) {
                    dp[i][j][k] = std::max(dp[i][j][k], dp[i][j - 1][k - 1] + green[j - 1] * blue[k - 1]);
                }
            }
        }
    }

    int max = 0;
    for (int i = 0; i <= red.size(); ++i) {
        for (int j = 0; j <= green.size(); ++j) {
            for (int k = 0; k <= blue.size(); ++k) {
                max = std::max(max, dp[i][j][k]);
            }
        }
    }

    return max;
}

#ifndef TESTING
int n1, n2, n3;
int x;
std::vector<int> red;
std::vector<int> green;
std::vector<int> blue;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> n1 >> n2 >> n3;
    for (int i = 0; i < n1; ++i) {
        std::cin >> x;
        red.push_back(x);
    }
    for (int i = 0; i < n2; ++i) {
        std::cin >> x;
        green.push_back(x);
    }
    for (int i = 0; i < n3; ++i) {
        std::cin >> x;
        blue.push_back(x);
    }

    std::cout << solve(red, green, blue);

    return 0;
}
#endif
