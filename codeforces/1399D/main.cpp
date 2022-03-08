#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>

std::pair<std::vector<int>, int> solve(std::string str) {
    std::vector<std::stack<int>> a(2);
    std::vector<int> sol;

    int nextNumber = 0;
    for (const auto& c : str) {
        int p = (c - '0' + 1) % 2;
        if (a[p].empty()) {
            nextNumber++;
            sol.push_back(nextNumber);
            a[(p + 1) % 2].push(nextNumber);
        }
        else {
            sol.push_back(a[p].top());
            a[(p + 1) % 2].push(a[p].top());
            a[p].pop();
        }
    }
    return {sol, nextNumber};
}

#ifndef TESTING
int T, N;


int main() {

    scanf("%d", &T);
    for (int t = 0; t < T; ++t) {
        scanf("%d", &N);
        char input[200001];
        scanf("%s", &input);

        auto sol = solve(input);
        std::cout << sol.second << std::endl;
        for (const auto& i : sol.first) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
#endif
