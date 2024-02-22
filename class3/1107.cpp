#include "class3.h"
#include "iostream"
#include <cmath>

using namespace std;

typedef struct{
    int upper;
    int under;
    bool isOver;
    bool isUnder;
}button;

int b1107() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;

    cin >> n >> m;

    int result = abs(n - 100);
    bool broken[10];
    int digit = 0;
    int under = 0, over = 0;
    button b[10];

    for (bool & i : broken) {
        i = false;
    }

    for (int i = 0; i < m; i++) {
        cin >> k;
        broken[k] = true;
    }

    if (m == 10) {
        cout << abs(n - 100);
        return 0;
    } else if (m == 9 && !broken[0]) {
        cout << min(abs(n - 100), n);
        return 0;
    }

    for (int i = 0; i < 10; i++) {
        int t = i;
        while (broken[t]) {
            t = (10 + t - 1) % 10;
        }
//        if (broken[i]) {
//            while
//        }
//        b[i].
    }

    for (int i = n; i > 0; i /= 10) {
        digit++;
    }

    int target[digit], under_target[digit], over_target[digit];

    for (int i = 0; i < digit; i++) {
        target[i] = n / (int)pow(10, digit - i - 1) % 10;
        under_target[i] = n / (int)pow(10, digit - i - 1) % 10;
        over_target[i] = n / (int)pow(10, digit - i - 1) % 10;
    }

    while(true) {
        bool isValid = true;
        for (int i = 0; i < digit; i++) {
            if (broken[under_target[i]]) {
                isValid = false;
            }
        }
        if (isValid) {
            break;
        }
    }
//
//    for (int i = digit - 1; i >= 0; i--) {
//        int underN = max(n / (int)pow(10, i) % 10, 0);
//        cout << "underN : " << underN << '\n';
//        while (true) {
//            if(underN < 0 || !broken[underN]) {
//                break;
//            }
//            underN--;
//        }
//        cout << "underN : " << underN << '\n';
//        if(underN > 0) {
//            under += underN * (int)pow(10, i);
//        }
//
//        int overN = min((n / (int)pow(10, i)) % 10, 9);
//        cout << "overN : " << overN << '\n';
//        while (true) {
//            if(overN > 9 || !broken[overN]) {
//                break;
//            }
//            overN++;
//        }
//        cout << "overN : " << overN << '\n';
//        if(overN < 10) {
//            over += overN * (int)pow(10, i);
//        }
//    }

    cout << "under : " << under << '\n';
    cout << "over : " << over << '\n';

    cout << result;

    return 0;
}
