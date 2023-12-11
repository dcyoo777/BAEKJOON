#include <iostream>

int main2738() {

    int n, m;
    std::cin >> n >> m;
    int matrix[2][n][m];

    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cin >> matrix[k][i][j];
            }
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", matrix[0][i][j] + matrix[1][i][j]);
        }
        printf("\n");
    }

    return 0;
}
