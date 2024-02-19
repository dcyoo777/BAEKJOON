#include "class2.h"
#include "iostream"
#include "algorithm"

using namespace std;

int b2108() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int sum = 0, last=4001, frequent = 0, m, mf = 0, mc = 0;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++){
        if(last != arr[i]) {
            last = arr[i];
            frequent = 1;
        } else {
            frequent++;
        }

        if(frequent > mf) {
            m = last;
            mf = frequent;
            mc = 0;
        } else if (frequent == mf && ++mc == 1) {
            m = last;
        }
    }

    cout << (int)round((double)sum / n) << '\n';
    cout << arr[n / 2] << '\n';
    cout << m << '\n';
    cout << arr[n-1] - arr[0] << '\n';

    return 0;
}
