#include <iostream>
#include <fstream>

#include <Graph.hpp>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cerr << "Передано неверное количество аргументов: граф не найден" << std::endl;
        return 1;
    }
    std::ifstream fin(argv[argc - 1]);
    if (!fin) {
        std::cerr << "Ошибка открытия файла: " << argv[argc - 1] << std::endl;
        return 1;
    }
    int n;
    int m;
    fin >> n >> m;
    Graph graph(n);
    while (m--) {
        int u;
        int v;
        fin >> u >> v;
        graph.add(u, v);
    }
    int start;
    fin >> start;
    std::vector<int> answer = graph.bfs(start);
    for (auto &x : answer) {
        std::cout << x << std::endl;
    }
}
