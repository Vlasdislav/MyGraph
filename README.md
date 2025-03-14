# Кратчайшее расстояние в графе

Проект представляет собой программу на C++, которая находит кратчайшие расстояния от заданной вершины до всех остальных вершин в ненаправленном графе с использованием алгоритма поиска в ширину (BFS).

## Описание

Программа считывает граф из файла, затем с помощью алгоритма BFS вычисляет кратчайшие расстояния от заданной вершины до всех остальных вершин. Результаты выводятся на экран.

### Структура входного файла

Входной файл должен иметь следующую структуру:

```
<количество вершин>
<количество рёбер>
<ребро 1> <ребро 2>
<ребро 1> <ребро 3>
...
<номер вершины, от которой нужно посчитать расстояния>
```

Пример входного файла `graph.txt`:

```
5
4
0 1
0 4
1 2
1 3
4
```

Где:
- Первая строка — количество вершин графа.
- Вторая строка — количество рёбер.
- Следующие строки описывают рёбра графа в формате `u v`, где существует рёбер от вершины `u` до вершины `v`.
- Последняя строка — номер вершины, от которой нужно посчитать расстояния.

### Пример вывода

Для тестового файла `graph.txt` будет выведен следующий результат:

```
1
2
3
3
0
```

## Как собрать проект

1. Клонируйте репозиторий:

   ```bash
   git clone https://github.com/Vlasdislav/MyGraph.git
   cd MyGraph
   ```

2. Соберите и скомпилируйте проект:

   ```bash
   cmake build .
   cmake --build .
   ```

3. После успешной сборки, запустите программу:

   ```bash
   ./GraphProject <путь_к_файлу_с_графом>
   ```

   Например:

   ```bash
   ./GraphProject graph.txt
   ```

## Зависимости

Проект не имеет внешних зависимостей и использует стандартную библиотеку C++.

## Лицензия

Этот проект распространяется под лицензией MIT. См. файл [LICENSE](LICENSE) для подробностей.
