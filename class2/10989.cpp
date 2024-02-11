#include "class2.h"
#include "iostream"

using namespace std;

int b10989() {

    // std::cin, std::count 속도를 빠르게 하는 코드
    ios::sync_with_stdio(false);
    cin.tie(0);

    int MAX_NUM = 10000;
    int arr[MAX_NUM + 1];
    int n, a;
    string res;

    cin >> n;

    for (int i = 0; i < MAX_NUM + 1; i++)
        arr[i] = 0;

    for (int i = 0; i < n; i++) {
        cin >> a;
        arr[a]++;
    }

    for (int i = 1; i < MAX_NUM + 1; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i << '\n';
        }
    }

    return 0;
}
