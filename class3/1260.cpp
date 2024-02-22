#include "class3.h"
#include "iostream"

using namespace std;

void dfs(int n, bool *visited, bool **graph, int *result, int *last, int node) {
    visited[node] = true;
    result[(*last)++] = node;

    for (int i = 1; i <= n; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(n, visited, graph, result, last, i);
        }
    }
}

void bfs(int n, bool *visited, bool **graph, int *result, int *last, int current) {
    int node = result[current];

    for (int i = 1; i <= n; i++) {
        if (graph[node][i] && !visited[i]) {
            visited[i] = true;
            result[(*last)++] = i;
        }
    }

    if (current + 1 < *last) {
        bfs(n, visited, graph, result, last, current + 1);
    }

}

int b1260() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, v;

    cin >> n >> m >> v;

    int dfs_result[n], bfs_result[n], dfs_last = 0, bfs_last=0, arr[m][2];
    bool visited[n], visited_dfs[n], visited_bfs[n];
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

    for (int i = 0; i < n + 1; i++) {
        visited[i] = false;
        visited_dfs[i] = false;
        visited_bfs[i] = false;
    }

    dfs(n, visited_dfs, graph, dfs_result, &dfs_last, v);

    bfs_result[0] = v;
    visited_bfs[v] = true;
    bfs_last = 1;
    bfs(n, visited_bfs, graph, bfs_result, &bfs_last, 0);

    for (int i = 0; i < dfs_last; i++) {
        cout << dfs_result[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < bfs_last; i++) {
        cout << bfs_result[i] << " ";
    }

    return 0;
}
