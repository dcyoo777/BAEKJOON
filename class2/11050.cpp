#include "class2.h"
#include "iostream"

using namespace std;

int factorial(int num) {

    int result = 1;

    for (int i = 2; i <= num; i++)
        result *= i;

    return result;
}

int b11050() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;

    cin >> n >> k;

    cout << factorial(n) / factorial(k) / factorial(n-k);

    return 0;
}
