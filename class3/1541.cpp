#include "class3.h"
#include "iostream"

using namespace std;

int b1541() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;

    cin >> str;

    cout << str.find_first_of(str, '-') << '\n';

    return 0;
}
