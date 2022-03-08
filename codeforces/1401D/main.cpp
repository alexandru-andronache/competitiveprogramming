#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>

std::vector<int> points;
std::vector<int> visited;

void dfs(const std::vector<std::vector<int>>& edge, int x) {
    points[x]++;
    visited[x] = 1;
    for (const auto& e : edge[x]) {
        if (visited[e] == 0) {
            dfs(edge, e);
            points[x] += points[e];
        }
    }
}

long long solve(const std::vector<std::pair<int, int>>& edges, std::vector<int> factors) {
    const long long K = std::pow(10, 9) + 7;
    std::vector<std::vector<int>> edge(edges.size() + 1, std::vector<int>());
    std::vector<long long> products;

    for (const auto& e : edges) {
        edge[e.first - 1].push_back(e.second - 1);
        edge[e.second - 1].push_back(e.first - 1);
    }

    visited.clear();
    points.clear();
    visited.insert(visited.end(), edges.size() + 1, 0);
    points.insert(points.end(), edges.size() + 1, 0);

    dfs(edge, 0);

    for (const auto& e: edges) {
        int min = std::min(points[e.first - 1], points[e.second - 1]);
        products.push_back(min * (edges.size() + 1 - min));
    }

    std::sort(products.begin(), products.end(), [](long long a, long long b) {
        return a > b;
    });

    std::sort(factors.begin(), factors.end(), [](int a, int b) {
        return a > b;
    });

    long long sol = 0;
    if (factors.size() <= edges.size()) {
        auto it = products.begin();
        for (const auto& f : factors) {
            sol = (sol + f * (*it)) % K;
            it++;
        }
        while (it != products.end()) {
            sol = (sol + (*it)) % K;
            it++;
        }
    }
    else {
        long long maxEdge = 1;
        auto it = factors.begin();
        for (int i = 0; i < factors.size() - edges.size() + 1; ++i) {
            maxEdge = (maxEdge * (*it)) % K;
            it++;
        }
        sol = (sol + maxEdge * products[0]) % K;
        for (int i = 1; i < products.size(); ++i) {
            sol = (sol + products[i] * (*it)) % K;
            it++;
        }
    }

    return sol;
}

#ifndef TESTING
int T, N, M;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cin >> T;
    for (int t = 0; t < T; ++t) {
        std::vector<std::pair<int, int>> edges;
        std::vector<int> factors;
        std::cin >> N;
        for (int i = 0, x, y; i < N - 1; ++i) {
            std::cin >> x >> y;
            edges.push_back({x, y});
        }
        std::cin >> M;
        for (int i = 0, x; i < M; ++i) {
            std::cin >> x;
            factors.push_back(x);
        }
        std::cout << solve(edges, factors) << std::endl;
    }
    return 0;
}
#endif
