#include "class2.h"
#include <cmath>
#include "iostream"

using namespace std;

int b18110() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int sum = 0, low_sum = 0, high_sum = 0;

    cin >> n;

    if (n == 0) {
        cout << 0;
        return 0;
    }

    int arr[n];
    int d = (int)round((double)n * 0.15);
    int low[d], high[d];

//    cout << d;

    for (int i = 0; i < d; i++) {
        low[i] = 31;
        high[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        for (int j = 0; j < d; j++) {
            if (arr[i] < low[j]) {
                low[j] = arr[i];
                for (int k = d - 1; k > j; k--) {
                    low[k] = low[k - 1];
                }
                break;
            }
        }

        for (int j = 0; j < d; j++) {
            if (arr[i] > high[j]) {
                high[j] = arr[i];
                for (int k = d - 1; k > j; k--) {
                    high[k] = high[k - 1];
                }
                break;
            }
        }

        sum += arr[i];
    }

    for (int i = 0; i < d; i++) {
        low_sum += low[i];
        high_sum += high[i];
    }

//    cout << sum << '\n' << low_sum << '\n' << high_sum << '\n';

    cout << (int)round((double)(sum - low_sum - high_sum) / (double)(n - 2 * d));

    return 0;
}
