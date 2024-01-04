#include "class2.h"
#include "iostream"

using namespace std;

int func(int num) {
    int result = num;

    while(true) {
        if(num == 0) {
            break;
        }
        result += num % 10;
        num /= 10;
    }

    return result;
}

int b2231() {

    int n;

    cin >> n;

    int length = to_string(n).length();

    int num = n - 9 * length;

    while(num < n) {
        if (func(num) == n) {
            cout << num;
            return 0;
        }
        num++;
    }

    cout << 0;

    return 0;
}
