#include "class2.h"
#include "iostream"

using namespace std;

const int MAX_NUM = 15;

int b2775() {

    int arr[MAX_NUM][MAX_NUM];

    for (int i = 0; i < MAX_NUM; i++) {
        for (int j = 0; j < MAX_NUM; j++) {
            if (j == 0) {
                arr[i][j] = 1;
            } else if (i == 0) {
                arr[i][j] = arr[i][j - 1] + 1;
            } else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }
    }

    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {

        int k, n;

        cin >> k >> n;

        cout << arr[k][n - 1] << '\n';
    }

    return 0;
}
