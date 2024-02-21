#include "class2.h"
#include "iostream"
#include "stdint.h"

using namespace std;

int b18111() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, b;

    cin >> n >> m >> b;

    int arr[n][m];
    int sum = 0;
    int result_time = INT32_MAX, result_height = 256;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }

    int max_height = min((sum + b) / n / m, 256);
    int min_height = 0;


    for (int h = max_height; h >= min_height; h--) {
        int time = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int diff = arr[i][j] - h;
                if (diff > 0) {
                    diff *= 2;
                } else if (diff < 0) {
                    diff *= -1;
                }
                time += diff;
            }
        }
        if (time < result_time) {
            result_time = time;
            result_height = h;
        } else {
            break;
        }
    }

    cout << result_time << " " << result_height;

    return 0;
}
