#include "class2.h"
#include "iostream"

using namespace std;

int countOf(int num, int divideNum) {
    int count = 0;
    while (num % divideNum == 0) {
        count++;
        num /= divideNum;
    }
    return count;
}

int b1676() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int countOf5 = 0;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        countOf5 += countOf(i, 5);
    }

    cout << countOf5;

    return 0;
}
