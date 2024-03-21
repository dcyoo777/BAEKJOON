#include "class3.h"
#include "iostream"

using namespace std;

int f1463(int n, bool *visited, int **result, int *last, int current) {

    int num = result[current][0];
    int depth = result[current][1];

    if (num == 1) {
        return depth;
    }

    if (num % 3 == 0 && !visited[num / 3]) {
        visited[num / 3] = true;
        result[*last][0] = num / 3;
        result[*last][1] = depth + 1;
        (*last)++;
    }
    if (num % 2 == 0 && !visited[num / 2]) {
        visited[num / 2] = true;
        result[*last][0] = num / 2;
        result[*last][1] = depth + 1;
        (*last)++;
    }
    if(!visited[num - 1]) {
        visited[num - 1] = true;
        result[*last][0] = num - 1;
        result[*last][1] = depth + 1;
        (*last)++;
    }

    return f1463(n, visited, result, last, current + 1);
}

int b1463() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    int last = 0;
    int **result;
    bool *visited = new bool[1000001];

    result = new int *[1000001];

    for (int j = 1; j < n + 1; j++) {
        result[j - 1] = new int[2];
        visited[j] = false;
    }

    result[0][0] = n;
    result[0][1] = 0;
    visited[n] = true;
    last = 1;
    int value = f1463(n, visited, result, &last, 0);

    cout << value;

    return 0;
}
