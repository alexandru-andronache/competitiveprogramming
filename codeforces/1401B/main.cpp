#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int solve(int x1, int y1, int z1, int x2, int y2, int z2) {
    int plus = 0, minus = 0;
    if (z1 >= y2) {
        plus = 2 * y2;
        z2 = z2 - (z1 - y2);
    }
    else {
        plus = 2 * z1;
    }
    z2 = z2 - x1;
    minus = 2 * std::max(z2, 0);

    return plus - minus;
}

#ifndef TESTING
int T;
long long x1, y1, z1, x2, y2, z2;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::cin >> x1 >> y1 >> z1;
        std::cin >> x2 >> y2 >> z2;
        std::cout << solve(x1, y1, z1, x2, y2, z2) << std::endl;
    }
    return 0;
}
#endif
