#include "class3.h"
#include "iostream"

using namespace std;

int kevinBacon(int n, bool *visited, bool **graph, int **result, int *last, int current) {
    int node = result[current][0];
    int depth = result[current][1];

    for (int i = 1; i <= n; i++) {
        if (graph[node][i] && !visited[i]) {
            visited[i] = true;
            result[(*last)][0] = i;
            result[(*last)++][1] = depth + 1;
        }
    }

    if (current + 1 < *last) {
        return depth + kevinBacon(n, visited, graph, result, last, current + 1);
    }

    return depth;
}

int b1389() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    cin >> n >> m;

    int bfs_last=0, arr[m][2];
    int min = 999999999, result;
    int **bfs_result;
    bool visited[n];
    bool **graph = new bool *[n + 1];

    for (int i = 0; i < n + 1; i++) {
        graph[i] = new bool [n + 1];
        for (int j = 0; j < n + 1; j++) {
            graph[i][j] = false;
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> arr[i][0] >> arr[i][1];
        graph[arr[i][0]][arr[i][1]] = true;
        graph[arr[i][1]][arr[i][0]] = true;
    }

    for (int i = 1; i < n + 1; i++) {
        bfs_result = new int *[n];

        for (int j = 1; j < n + 1; j++) {
            bfs_result[j - 1] = new int[2];
            visited[j] = false;
        }

        bfs_result[0][0] = i;
        bfs_result[0][1] = 0;
        visited[i] = true;
        bfs_last = 1;
        int value = kevinBacon(n, visited, graph, bfs_result, &bfs_last, 0);

        if (min > value) {
            min = value;
            result = i;
        }
    }

    cout << result;

    return 0;
}
