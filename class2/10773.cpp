#include "class2.h"
#include "iostream"

using namespace std;

int b10773() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, num;

    cin >> n;

    int arr[n];
    int sum = 0, last = 0;


    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num) {
            arr[last++] = num;
        } else {
            last--;
        }
    }

    for (int i = 0; i < last; i++) {
        sum += arr[i];
    }

    cout << sum;

    return 0;
}
