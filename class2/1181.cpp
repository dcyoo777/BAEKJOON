#include "class2.h"
#include "iostream"
#include <cstring>
#include <cstdlib>

using namespace std;

int compare1181(const void *a, const void *b) {
    string str1 = (char *)a;
    string str2 = (char *)b;
    int lenDiff = str1.length() - str2.length();
    if (lenDiff != 0) {
        return lenDiff;
    }
    return strcmp((char *)a, (char *)b);
}

int b1181() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    char dic[n][51];

    for (int i = 0; i < n; i++) {
        cin >> dic[i];
    }

    qsort(dic, n, sizeof(dic[0]), compare1181);

    std::cout << dic[0] << '\n';
    for (int i = 1; i < n; i++) {
        if (strcmp(dic[i - 1], dic[i]) != 0) {
            std::cout << dic[i] << '\n';
        }
    }

    return 0;
}
