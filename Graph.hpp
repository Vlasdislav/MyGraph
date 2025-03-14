#pragma once

#include <vector>
#include <queue>
#include <unordered_set>
#include <limits>

class Graph {
private:
    std::vector<std::unordered_set<int>> graph_;
    int number_vertices_;

public:
    Graph(const int &number_vertices)
        : number_vertices_(number_vertices) {
        graph_.resize(number_vertices);
    }

    void add(const int &u, const int &v) {
        graph_[u].insert(v);
        graph_[v].insert(u);
    }

    std::vector<int> bfs(const int &s) {
        std::vector<int> dist(number_vertices_, std::numeric_limits<int>::max());
        std::vector<bool> used(number_vertices_, false);
        std::queue<int> queue;

        dist[s] = 0;
        queue.push(s);

        while(!queue.empty()) {
            int v = queue.front();
            queue.pop();
            used[v] = true;
            for (int u : graph_[v]) {
                if (!used[u]) {
                    dist[u] = dist[v] + 1;
                    queue.push(u);
                    used[u] = true;
                }
            }
        }

        return dist;
    }
};
