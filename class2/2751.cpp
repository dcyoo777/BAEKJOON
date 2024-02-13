#include "class2.h"
#include "iostream"

using namespace std;

int compare(const void *a, const void *b) {
    return *(int *)a - *(int *)b;
}

int b2751() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    qsort(arr, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << '\n';
    }


    return 0;
}
