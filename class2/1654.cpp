#include "class2.h"
#include "iostream"

using namespace std;

int count(const int *arr, int len, int num) {
    int count = 0;
    for (int j = 0; j < len; j++) {
        count += arr[j] / num;
    }
    return count;
}

int b1654() {

    int k, n;

    cin >> k >> n;

    int arr[k];
    int under = 1, over = 0, target = 0;


    for (int i = 0; i < k; i++) {
        cin >> arr[i];
        target += arr[i];
        if (arr[i] > over) {
            over = arr[i];
        }
    }

    over++;
    target /= n;

//    cout << "under : " << under << "\tover : " << over << "\ttarget : " << target << '\n';

    while (over - under > 1) {
        int cnt = count(arr, k, target);
        if (cnt < n) {
            over = target;
        } else {
            under = target;
        }
        target = (over + under) / 2;
//        cout << "under : " << under << "\tover : " << over << "\ttarget : " << target << "\tcount : " << cnt << '\n';
    }

    cout << under;

    return 0;
}
