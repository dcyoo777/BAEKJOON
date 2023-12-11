#include "class2.h"
#include "iostream"

int b1018() {

    int m, n;
    int result = 64;

    std::cin >> m >> n;

    bool board[m][n];

    for (int i=0; i<m; i++) {
        std::string str;
        std::cin >> str;
        for (int j=0; j<n; j++) {
            board[i][j] = str[j] == 'B';
        }
    }

    for (int i=0; i<m-7; i++) {
        for (int j=0; j<n-7; j++) {

            int count = 0;
            for (int k=0; k<8; k++) {
                for (int l=0; l<8; l++) {
                    if ((board[i + k][j + l] && (k + l) % 2) || (!board[i + k][j + l] && !((k + l) % 2))) {
                        count++;
                    }
                }
            }

            if(result > std::min(count, 64-count)) {
                result = std::min(count, 64-count);
            }
        }
    }

    std::cout << result;

    return 0;
}
