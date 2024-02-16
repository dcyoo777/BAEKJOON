#include "class2.h"
#include "iostream"

using namespace std;

int compare(int w1, int h1, int w2, int h2) {
    if (w1 > w2 && h1 > h2) {
        return 1;
    }
    if (w2 > w1 && h2 > h1) {
        return -1;
    }
    return 0;
}

int b7568() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    int arr[n][3];

    for (int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
        arr[i][2] = 1;
        for (int j = 0; j < i; j++){
            int compareFlag = compare(arr[j][0], arr[j][1], arr[i][0], arr[i][1]);
            if (compareFlag > 0) {
                arr[i][2]++;
            } else if (compareFlag < 0) {
                arr[j][2]++;
            }
        }

    }

    for (int i = 0; i < n - 1; i++) {
        cout << arr[i][2] << ' ';
    }
    cout << arr[n-1][2];

    return 0;
}
