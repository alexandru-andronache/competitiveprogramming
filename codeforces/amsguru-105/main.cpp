#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

unsigned long long solve(int n) {
    return n - n / 3 - (n % 3 != 0);
}

#ifndef TESTING
int N;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> N;
    std::cout << solve(N);
    
    return 0;
}
#endif
