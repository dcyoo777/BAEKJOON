#include "class2.h"
#include "iostream"

using namespace std;

int b1874() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;

    cin >> n;

    int arr[n];
    int stack[n];
    int last = 0;
    string str = "";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int i = 0;
    int num = 1;

    while (i <= n) {
        if (last == 0 || arr[i] > stack[last - 1]) {
            stack[last++] = num++;
            str += "+\n";
        }
        if (arr[i] == stack[last - 1]) {
            last--;
            i++;
            str += "-\n";
            if (i == n) {
                cout << str;
                break;
            }
        } else if (arr[i] < stack[last - 1] || num > n) {
            cout << "NO\n";
            break;
        }
    }

    return 0;
}
