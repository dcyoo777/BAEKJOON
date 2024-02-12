#include "class2.h"
#include "iostream"

using namespace std;

const int R = 31;
const int M = 1234567891;

long func(char c, int index) {
    long ri = 1;
    long a = c - 96;
    for (int i = 1; i < index; i++) {
        ri = (ri * R) % M;
    }
    return a * ri;
}

int b15829() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int l;
    long result = 0;
    string str;

    cin >> l >> str;

    for (int i = 0; i < l; i++) {
        result += func(str[i], i + 1);
    }

    cout << result % M;

    return 0;
}
