#include "class2.h"
#include "iostream"

using namespace std;

int compare1920(const void *a, const void *b) {
    long diff = (long)((*(int*)a) - (long)(*(int*)b));
    if (diff < 0) {
        return -1;
    } else if (diff > 0) {
        return 1;
    } else {
        return 0;
    }
}

int bs(const int* arr, const int start, const int end, const int num) {

    if(end - start <= 1) {
        if (arr[start] == num) {
            return start;
        }
        if (arr[end] == num) {
            return end;
        }
        return -1;
    }

    int index = (start + end) / 2;
    if (arr[index] == num) {
        return (start + end) / 2;
    } else if (arr[index] < num) {
        return bs(arr, index + 1, end, num);
    } else if (arr[index] > num) {
        return bs(arr, start, index - 1, num);
    }
    return -1;
}

int b1920() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;

    cin >> n;

    int arr1[n];

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    qsort(arr1, n, sizeof(int), compare1920);

    cin >> m;

    int k;

    for (int i = 0; i < m; i++) {
        cin >> k;
        if (bs(arr1, 0, n - 1, k) != -1) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }

    return 0;
}
