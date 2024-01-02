#include "class2.h"
#include "iostream"

using namespace std;

int b1546() {

    int n;
    double max, sum = 0;

    cin >> n;

    for (int i=0; i<n; i++) {
        int num;
        cin >> num;
        sum += num;
        if(max < num) {
            max = num;
        }
    }

    cout << sum / max / n * 100 << '\n';

    return 0;
}
